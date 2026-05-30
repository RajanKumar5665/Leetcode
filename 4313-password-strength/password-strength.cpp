class Solution {
public:
    int passwordStrength(string password) {

           int strength = 0;
           unordered_set<int> seen;

         for(char ch : password){
                // if(seen.count(ch)) continue;

                if(seen.find(ch) != seen.end()) continue;

                seen.insert(ch);

                if(isupper(ch)){
                     strength += 2;
                }else if(islower(ch)){
                     strength += 1;
                }else if(isdigit(ch)){
                     strength += 3;
                }else{
                     strength += 5;
                }

         }

          return strength;
    }
};