class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int whitecount =0;
        int mincount = INT_MAX;
        for(int right = 0; right < blocks.size(); right++){
            if(blocks[right]=='W'){
                whitecount++;
            }
            if(right - left+1 > k){
            if(blocks[left] == 'W'){
            whitecount--;

            
            }
            left++;
            }
        if(right - left +1 ==k) {
                 mincount = min(mincount,whitecount);
            }
        }
            return mincount;
        
    }
};