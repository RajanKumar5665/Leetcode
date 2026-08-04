class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int x : nums) {
            mini = min(mini, x);
            maxi = max(maxi, x);
        }

        vector<int> vec;

        for (int i = mini; i <= maxi; i++) {
            vec.push_back(i);
        }

        sort(nums.begin(), nums.end());

        vector<int> ans;

        int i = 0, j = 0;

        while (i < vec.size() && j < nums.size()) {

            if (vec[i] == nums[j]) {
                i++;
                j++;
            }
            else {
                ans.push_back(vec[i]);
                i++;
            }
        }

        return ans;
    }
};