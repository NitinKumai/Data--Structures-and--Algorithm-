class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currentmax = 0;
        int currentmin = 0;
        int maxsum = nums[0];
        int minsum = nums[0];
        int answer = 0;
        for(int i = 0 ; i < nums.size();i++){
            currentmax +=nums[i];
            maxsum = max(maxsum,currentmax);
            if(currentmax < 0)
            currentmax = 0;
            currentmin +=nums[i];
            minsum = min(minsum,currentmin);
            if(currentmin > 0){
                currentmin = 0;

            }
            answer = max(maxsum , abs(minsum));
        }
        return answer;
    }
};