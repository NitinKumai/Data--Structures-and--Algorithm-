class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st;
        vector<int> ans;

        // Put nums1 elements into set
        for(int x : nums1){
            st.insert(x);
        }

        // Check nums2
        for(int x : nums2){
            if(st.count(x)){
                ans.push_back(x);
                st.erase(x);
            }
        }

        return ans;
    }
};