class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
             
               int consumed = numBottles;
               int emptyBottles = numBottles;

               while(emptyBottles >= numExchange){
                     int extraBottles = emptyBottles / numExchange;

                     int remain = emptyBottles % numExchange;

                     consumed += extraBottles;

                     emptyBottles = remain + extraBottles;
               }

               return consumed;
    }
};