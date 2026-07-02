class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int left = 0;
        int sum = 0;
        int max_sum = INT_MIN;

        for(int right = 0; right < nums.size(); right++)
        {
            sum += nums[right];

            if(right - left + 1 > k)
            {
                sum -= nums[left];
                left++;
            }

            if(right - left + 1 == k)
            {
                max_sum = max(max_sum, sum);
            }
        }

        return (double)max_sum / k;
    }
};