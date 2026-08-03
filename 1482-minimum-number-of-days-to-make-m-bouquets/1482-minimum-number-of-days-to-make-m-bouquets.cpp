class Solution {
public:
bool Canmake(vector<int>& bloomDay, int m , int k , int days){
    int adjacent_flowers = 0;
    int bouquets = 0;
    for(int i = 0 ; i < bloomDay.size();i++){
        if(bloomDay[i] <=days){
            adjacent_flowers++;
        
        if(adjacent_flowers ==k){
            bouquets++;
            adjacent_flowers = 0;
        }
        }
        else {
            adjacent_flowers = 0;
        }
    }
    return bouquets >=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while(low <=high){
            int mid = low + (high - low)/2;
            if(Canmake(bloomDay,m,k,mid)){
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