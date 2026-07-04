class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxlen = 0;
        int maxfreq = 0;
        unordered_map<char,int>count; 
        for(int right = 0; right < s.length();right++){
            count[s[right]]++;
            maxfreq =max(maxfreq,count[s[right]]);
            while((right-left+1) - maxfreq > k){
                count[s[left]]--;
                left ++;
            }
            maxlen = max(maxlen, right - left + 1);
            
        }
        return  maxlen;
        
    }
};