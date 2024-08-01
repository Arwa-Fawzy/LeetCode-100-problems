using namespace std;
class MyStack {
    deque<int>q1; 
    
public:
    
    void push(int x) {
         q1.push_back(x);
    }
    
    int pop() {
         int last=q1.back();
         q1.pop_back();
         return last;
         
    }
    
    int top() {
        int last=q1.back();
         return last;
    }
    
    bool empty() {
        return q1.empty();
    }
    
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */