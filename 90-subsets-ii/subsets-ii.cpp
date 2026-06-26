class Solution {
public:
    set<vector<int>> st;
    void solve(vector<int>& nums,  int idx, vector<int>& temp){
             if(idx >= nums.size()){
                   st.insert(temp);
                   return;
             }
            //include
             temp.push_back(nums[idx]);
             solve(nums, idx + 1, temp);

             //exclude
             temp.pop_back();
             solve(nums, idx + 1, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(), nums.end());
            vector<int> temp;

            solve(nums, 0, temp);

            return vector<vector<int>>(st.begin(), st.end());
    }
};