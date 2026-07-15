class Solution {
public:
    int gcd(int a, int b){
         if(b == 0){
            return a;
         }

         return gcd(b, a % b);
    }

     int evenSum(int n){
          if(n == 0){
            return 0;
          }

          return evenSum(n - 1) + 2*n;
     }

     int oddSum(int n){
         if(n == 0){
            return 0;
         }

         return oddSum(n - 1) + (2*n - 1);
     }
    int gcdOfOddEvenSums(int n) {

          int even = evenSum(n);
          int odd = oddSum(n);

          return gcd(even, odd);
    }
};