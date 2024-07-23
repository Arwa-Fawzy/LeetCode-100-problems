class MinStack {
private:
    std::stack<int>st;
    std::stack<int>mnst;

public:
    MinStack() {}
    void push(int val) {
        st.push(val);
        if(mnst.empty()||val<=mnst.top()){
            mnst.push(val);
        }
    }
    
    void pop() {
        if(st.top()==mnst.top()){
            mnst.pop();
        }
        st.pop();
        
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return mnst.top();
    }
};
