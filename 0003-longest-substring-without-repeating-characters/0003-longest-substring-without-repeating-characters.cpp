class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>count;
        int left = 0;
        int max_len=0;
        for(int right = 0 ; right < s.length();right++){
            count[s[right]]++;
            while(count[s[right]] > 1){
         count[s[left]]--;
         if(count[s[left]]==0){
            count.erase(s[left]);
         } 
         left++;         
            }
            max_len = max(max_len, right -left + 1);
        }
       return max_len; 
        
    }
};