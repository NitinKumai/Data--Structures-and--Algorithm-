class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(n + 1);
        for(auto it : mp){
        bucket[it.second].push_back(it.first);
        }
        for (int j = n; j >= 1; j--){
            for (int num : bucket[j]){
                if(ans.size() == k) break;
                ans.push_back(num);
                
                
            }
        }      
     return ans;

    }
};