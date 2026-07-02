class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());

int left = 0;
int ans = INT_MAX;
int diff;

for(int right = k - 1; right < nums.size(); right++)
{
    ans = min(ans, nums[right] - nums[left]);
    left++;
}

return ans;
        
    }
};