class Solution {
public:
bool CanReach(vector<int>& dist, double hour, int speed){
     double total_time = 0;
     int n = dist.size();
   for(int i = 0; i < dist.size() - 1; i++){
       
        total_time += ceil((double)dist[i]/speed) ;
   }
        total_time += (double)dist[n-1] / speed;
        
     return total_time <= hour;
}
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int high = 10000000;
        int ans = low;
        if(hour <= dist.size()-1)
    return -1;
        while ( low <=high){
            int mid = low + (high - low)/2;
            if (CanReach(dist, hour,mid)){
                ans = mid;
              high = mid - 1;
            }
                   else {
                low = mid + 1;
                   }
        }
   return ans;
    }
 
};