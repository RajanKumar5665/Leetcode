class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mpp;

        for(auto st : words){
            mpp[st]++;
        }

        vector<pair<string, int>> ans;

        for(auto it : mpp){
             ans.push_back(it);
        }

        sort(ans.begin(), ans.end(),
            [](pair<string, int> a, pair<string, int> b) {

                if (a.second == b.second) {
                    return a.first < b.first;
                }

                return a.second > b.second;
            });
       
       vector<string> res;
        for(int i = 0; i < k; i++){
           res.push_back(ans[i].first);
        }

        return res;
    }
};