class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude= 0;
        int maxaltitude= 0;
        for(int right = 0; right < gain.size();right++){
            altitude+=gain[right];
            maxaltitude = max(maxaltitude,altitude);
        }
        return maxaltitude;
    }
};