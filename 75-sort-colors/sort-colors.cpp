class Solution {
public:
    void sortColors(vector<int>& nums) {
         int zeros = 0;
         int ones = 0;
         int twos = 0;

         int n  = nums.size();

         for(int i = 0; i < n; i++){
              if(nums[i] == 0){
                  zeros++;
              }else if(nums[i] == 1){
                 ones++;
              }else{
                twos++;
              }
         }


         int index = 0;

         while(zeros--){
             nums[index++] = 0;
         }
         while(ones--){
              nums[index++] = 1;
         }
         while(twos--){
             nums[index++] = 2;
         }


    }
};