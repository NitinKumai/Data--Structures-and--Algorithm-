class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>need;
        unordered_map<char,int>window;
        int left = 0;
        if(s1.length() > s2.length()) return false;
        for(char ch : s1)
{
    need[ch]++;
}
        for(int right = 0; right < s2.length();right++){
            window[s2[right]]++;
            if((right - left +1) > s1.length()){
                window[s2[left]]--;
                if(window[s2[left]]==0){
                    window.erase(s2[left]);
                }
                left++;
            }
            if((right - left + 1)==s1.length()){
                
                if(window==need){
                return true;
            }
            }
        }
        return false;
    }
};