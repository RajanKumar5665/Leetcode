class Solution {
public:
  vector<vector<int>> result;
   void solve(vector<int>& nums,  int idx, vector<int> &ans){
         if(idx >= nums.size()){
              result.push_back(ans);
              return;
         }
         
         ans.push_back(nums[idx]);
         solve(nums, idx + 1, ans);
         ans.pop_back();
         solve(nums, idx + 1, ans);
   }
    
    vector<vector<int>> subsets(vector<int>& nums) {
           vector<int> ans;

           solve(nums, 0, ans);

           return result;
    }
};