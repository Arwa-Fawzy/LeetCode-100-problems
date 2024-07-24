class Solution {
public:
    std::stack<char>st;
    string removeStars(string s) {
        for(char c:s){
            if(c!='*'){
                st.push(c);
            }else if(c=='*'&&!st.empty()){
                st.pop();
            }
        }std:: string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }reverse(ans.begin(),ans.end());
        return ans;
    }
};