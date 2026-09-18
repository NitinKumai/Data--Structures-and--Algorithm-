class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,char>mp;
        int left = 0 ;
        int max_len = 0;
        for(int right = 0 ; right < s.length();right++){
            mp[s[right]]++;
            while(mp[s[right]]>1){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};