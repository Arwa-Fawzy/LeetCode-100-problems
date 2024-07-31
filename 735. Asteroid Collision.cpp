using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); ++i) {
            if (st.empty() || asteroids[i] > 0 || st.top() < 0) {
                st.push(asteroids[i]);
            } else {
                while (!st.empty() && st.top() > 0) {
                    if (abs(st.top()) < abs(asteroids[i])) {
                        st.pop();
                    } else {
                        break;
                    }
                }
                if (!st.empty() && abs(asteroids[i]) == abs(st.top())&&(st.top()!=asteroids[i])) {
                    st.pop();
                } else if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                }
            }
        }
        
        vector<int> res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};
