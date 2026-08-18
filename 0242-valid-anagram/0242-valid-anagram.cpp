class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
       if(s.length() != t.length()) return false ;
       for(int right = 0 ; right < s.length();right++){
        mp[s[right]]++;
        
       }
       for(int left = 0 ;  left < t.length();left++){
        mp[t[left]]--;
        if(mp[t[left]] < 0) {
            return false;
        }
       }
        return true;
    }
};