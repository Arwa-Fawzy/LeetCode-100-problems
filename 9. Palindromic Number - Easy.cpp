class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x),c=to_string(x);
        reverse(s.begin(),s.end());
        if(s==c)return true;
        else return false;
    }
};