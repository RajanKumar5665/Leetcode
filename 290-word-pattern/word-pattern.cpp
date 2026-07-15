class Solution {
public:
    bool wordPattern(string pattern, string s) {
           
          unordered_map<string, char> mp;
           vector<string> words;

           stringstream ss(s);

           string token;

           int countWords = 0;

           while(getline(ss, token, ' ')){
                 words.push_back(token);
                 countWords++; 
           } 

           int n = pattern.length();

           if(n != countWords){
              return false;
           }

           set<char> used;

           for(int i = 0; i < n; i++){
                char ch = pattern[i];
                string st = words[i];

                if(mp.find(st) == mp.end() && used.find(ch) == used.end()){
                         mp[st] = ch;
                         used.insert(ch);
                }else if(mp[st] != pattern[i]){
                    return false;
                }
           }


           return true;


    }
};