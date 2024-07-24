class Solution {
public:
    std::stack<char>st;
    string makeGood(string s) {
        for(char x:s){
            if(!st.empty()&&std::tolower(st.top())==std::tolower(x)
            &&st.top()!=x){
                st.pop();
            }else{
                st.push(x);
            }
        }std::string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};