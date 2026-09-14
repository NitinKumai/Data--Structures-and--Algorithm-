class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int count = 0;
        for(int right = 0 ; right < nums.size();right++){
            sum+=nums[right];
            if(right - left + 1 > k){
                sum-=nums[left];
                left++;
            }
            if(right - left + 1 ==k){
                if(sum/k>=threshold){
                    count++;
                }
            }
        }
       return count; 
    }
};