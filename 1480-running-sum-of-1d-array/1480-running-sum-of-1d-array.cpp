class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prefix(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
            sum = sum + nums[i];
            prefix[i] = sum;
        }

       return prefix; 
    }
};