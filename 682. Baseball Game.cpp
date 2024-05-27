class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int>st; int ans=0;
        for(int i=0; i<operations.size();++i){
            if(operations[i]=="D"){
                int x=2*st.top();
                st.push(x);
            }else if(operations[i]=="+"){
                int x=st.top(); st.pop();
            int y=x+st.top();
                st.push(x);
                st.push(y);

            }else if(operations[i]=="C"){
                st.pop();
            }else{
                st.push(stoi(operations[i]));
            }
        }while(!st.empty()){
            ans+=st.top();
            st.pop();
        }return ans;
    }
};