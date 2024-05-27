class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0, left=0,right=0;
        unordered_set <char>c;
        for(int i=0; i<s.size(); ++i){
            if(c.count(s[i])==0){
                c.insert(s[i]);
                mx=max(mx,i-left+1);
            }else{
                while(c.count(s[i])){
                    c.erase(s[left]);
                    ++left;
                }
            }c.insert(s[i]);
        }return mx;
    }
};