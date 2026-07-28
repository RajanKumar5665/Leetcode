class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
           
           vector<int> ans;

           for(int val : nums){
                int num = val * val;

                ans.push_back(num);
           }

           sort(ans.begin(), ans.end());

           return ans;
    }
};