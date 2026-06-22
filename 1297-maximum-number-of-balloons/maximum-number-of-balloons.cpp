class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mpp1, mpp2;

          string str = "balloon";
          
          if(str.size() > text.size()){
             return 0;
          }

          for(char &ch : str){
              mpp1[ch]++;
          }



        for(char &ch : text){
               if(mpp1.find(ch) != mpp1.end()){
                   mpp2[ch]++;
               }
        }
         
         if(mpp1.size() != mpp2.size()){
             return 0;
         }

        int ans = INT_MAX;
        for(auto it : mpp2){
            if(it.first == 'l' || it.first == 'o'){
                   ans = min(ans, it.second/2);
            }
         ans = min(ans, it.second);
       }
       
        return ans;
        
    }
};