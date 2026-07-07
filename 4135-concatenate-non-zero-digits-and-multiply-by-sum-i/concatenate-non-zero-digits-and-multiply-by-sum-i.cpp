class Solution {
public:
    long long sumAndMultiply(int n) {
         
             string str = to_string(n);
            
             string ans = "";
             for(int i = 0; i < str.size(); i++){
                   if(str[i] != '0'){
                      ans += str[i];
                   }
             }

             long long sum = 0;

             for(int j = 0; j < ans.size(); j++){
                      sum += ans[j] - '0';
             }
            
            int number = 0;
             for(int i = 0; i < ans.size(); i++){
                     int digit = ans[i] - '0';

                     number = number * 10 + digit;
             }

             long long st = sum * number;

             return st;
    }
};