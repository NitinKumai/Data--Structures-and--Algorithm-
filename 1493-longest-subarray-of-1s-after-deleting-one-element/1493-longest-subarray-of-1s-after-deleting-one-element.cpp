class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0 ;
        int max_len = 0;
        int count = 0;
        for(int right = 0; right < nums.size(); right ++) {
            if( nums[right]==0){
                count ++;
            }
            while(count > 1 ) {
               if(nums[left] ==0){
                count --;
               }
               left ++;
            }
            max_len = max(max_len, right - left);

        }
        return max_len;
        
    }
};