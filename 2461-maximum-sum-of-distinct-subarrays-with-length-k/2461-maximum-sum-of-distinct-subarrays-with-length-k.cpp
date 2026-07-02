class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long left = 0;
        long long sum = 0;
        long long maxsum = 0;
        unordered_map<int,int>freq;
        for(int right = 0; right < nums.size();right++){
            sum += nums[right];
            freq[nums[right]]++;
            if(right - left + 1 > k){
                sum -= nums[left];
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    freq.erase(nums[left]);
                }
                left++;
            }
           if(right - left + 1 == k)
{
    if(freq.size() == k)
    {
        maxsum = max(maxsum, sum);
    }
}
        }
        
        return maxsum;
        
    }
};