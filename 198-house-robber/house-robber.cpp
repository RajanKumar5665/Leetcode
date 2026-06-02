class Solution {
public:
  
    int rob(vector<int>& nums){

        //bottom up approch
        int n = nums.size();
        vector<int> t(n + 1, 0);
       // t[i] = max stolen money till i house
        if(n == 1){
            return nums[0];
        }
      // no house : i = 0
        t[0] = 0;
      
      //1 house : i = 1
        t[1] = nums[0];

        for(int i = 2; i <= n; i++){
               int steal = nums[i - 1] + t[i - 2];
               int skip = t[i - 1];

               t[i] = max(steal, skip);
        }

        return t[n];
    }
};