class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int white_count = 0;
        int min_count = INT_MAX;
        for(int right = 0 ; right < blocks.size();right++){
            if(blocks[right] =='W'){
                white_count++;
            }
            if(right - left + 1 > k){
                if(blocks[left]=='W'){
                    white_count--;
                }
                left++;
            }
            if(right - left + 1 ==k){
                min_count = min(min_count , white_count);
            }
        }
        return min_count;
    }
};