class Solution {
public:
    int solve(int a, int b){
        if(b == 0){
            return a;
        }

        return solve(b, a % b);
    }
    int findGCD(vector<int>& nums) {
          int min = INT_MAX;
          int max = INT_MIN;

          for(int i = 0; i < nums.size(); i++){
               if(max < nums[i])  
                   max = nums[i];

                if(min > nums[i])
                  min = nums[i];
          }

          return solve(min, max);
    }
};