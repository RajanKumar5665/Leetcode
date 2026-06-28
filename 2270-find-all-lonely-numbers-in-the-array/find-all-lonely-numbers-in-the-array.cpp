class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int val : nums){
             mpp[val]++;
        }

        vector<int> ans;
       
       int n = nums.size();
        for(int i = 0; i < n; i++){
                int num1 = nums[i] - 1;
                int num2 = nums[i] + 1;

                if(mpp.find(num1) == mpp.end() && mpp.find(num2) == mpp.end() && mpp[nums[i]] == 1){
                         ans.push_back(nums[i]);
                }
        }

        return ans;
    }
};