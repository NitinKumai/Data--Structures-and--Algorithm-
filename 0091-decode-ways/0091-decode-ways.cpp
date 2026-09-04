class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        vector<int>t(n+1,0);
        t[0] = 1;
        if(s[0] == '0') {
            t[1] = 0;
        }
        else{
            t[1] = 1;
        }
        for( int i = 2 ; i<=n;i++){
           int oneDigit = s[i-1] -'0' ;
           int twoDigit = (s[i-2] - '0') * 10 + (s[i-1] -'0');

           if(oneDigit >=1){
            t[i] +=t[i-1];
           }
           if(twoDigit >=10 && twoDigit <=26){
            t[i] +=t[i-2];
           }
        }
        return t[n];
    }
};