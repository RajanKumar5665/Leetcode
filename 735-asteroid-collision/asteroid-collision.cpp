class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        
        stack<int> st;
        int n = ast.size();
        for(int i = 0; i < n; i++){
               
               //collision happening
             while(!st.empty() && st.top() > 0 && ast[i] < 0 && st.top() < abs(ast[i])){
                 st.pop();
             }
             //not possible collision
            if(st.empty() || st.top() < 0 || ast[i] > 0){
                st.push(ast[i]);
            }else if(st.top() == abs(ast[i])){
                 st.pop();
            }
        }

        vector<int> ans;

        while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};