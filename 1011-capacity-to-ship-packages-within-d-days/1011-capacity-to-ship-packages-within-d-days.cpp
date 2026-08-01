class Solution {
public:
 bool CanShip(vector<int>& weights , int days, int cap){
    int daysUsed = 1 ;
    int currentload = 0 ; 
    for(int w : weights){
        if(currentload + w <= cap){
            currentload+=w;
        }
        else{
            daysUsed++;
            currentload = w;
        }
    }
     return daysUsed <=days;

 } 
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int ans = high;
        while(low <=high){
            int mid = low +(high - low)/2;
            if(CanShip(weights, days, mid)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};