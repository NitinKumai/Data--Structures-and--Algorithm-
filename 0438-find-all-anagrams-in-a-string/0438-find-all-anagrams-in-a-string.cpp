class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.length() > s.length())
            return ans;

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Frequency of characters in p
        for (char ch : p) {
            need[ch]++;
        }

        int left = 0;

        for (int right = 0; right < s.length(); right++) {

            // Add current character
            window[s[right]]++;

            // Keep window size equal to p.length()
            if (right - left + 1 > p.length()) {

                window[s[left]]--;

                if (window[s[left]] == 0) {
                    window.erase(s[left]);
                }

                left++;
            }

            // Compare both maps
            if (right - left + 1 == p.length()) {

                if (window == need) {
                    ans.push_back(left);
                }
            }
        }

        return ans;
    }
};