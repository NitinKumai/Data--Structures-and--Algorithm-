class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxlen = 0;
        unordered_map<char,int>count;
        for(int right = 0 ; right < s.length();right++){
            count[s[right]]++;

            while(count[s[right]] > 1){
                count[s[left]]--;
                if(count[s[left]]==0){
                    count.erase(s[left]);
                }
                left++;
            }
            maxlen = max(maxlen, right - left +1);
        }
        return maxlen;
    }
};