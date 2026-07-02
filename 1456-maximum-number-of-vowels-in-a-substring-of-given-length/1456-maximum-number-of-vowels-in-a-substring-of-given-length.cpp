class Solution {
public:
    int maxVowels(string s, int k) {

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int left = 0;
        int vowelCount = 0;
        int maxVowel = 0;

        for (int right = 0; right < s.length(); right++) {

            // Add current character
            if (vowels.count(s[right])) {
                vowelCount++;
            }

            // Shrink window
            if (right - left + 1 > k) {
                if (vowels.count(s[left])) {
                    vowelCount--;
                }
                left++;
            }

            // Update answer
            if (right - left + 1 == k) {
                maxVowel = max(maxVowel, vowelCount);
            }
        }

        return maxVowel;
    }
};