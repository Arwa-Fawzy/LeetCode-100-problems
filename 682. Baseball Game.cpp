class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::stack <int>st; int sz=operations.size();
        for(int i=0; i<sz; ++i){
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                st.push(st.top()*2);
            }else if(operations[i]=="+"){
                int f=st.top(), res;
                st.pop();
                res=f+st.top();
                st.push(f);
                st.push(res);
            }else{
                st.push(std::stoi(operations[i]));
            }
        }int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }return ans;
    }
};