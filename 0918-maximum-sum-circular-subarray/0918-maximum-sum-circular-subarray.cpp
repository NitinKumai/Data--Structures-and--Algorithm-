class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentmax = 0;
        int currentmin = 0;
        int maxsum = nums[0];
        int minsum = nums[0];
        int total = 0;
        int answer = 0;
        for(int  i = 0; i < nums.size();i++){
            total+= nums[i];
            currentmax+=nums[i];
            maxsum = max(maxsum , currentmax);
            if(currentmax < 0 ){
                currentmax = 0;
            }
          currentmin+=nums[i];
          minsum = min(minsum,currentmin);
          if(currentmin > 0){
            currentmin = 0;
          }
            answer = max(maxsum, total - minsum);
        }
        if((total - minsum)==0){
            return maxsum;
        }
        else{
        return answer;
        }
    }
};