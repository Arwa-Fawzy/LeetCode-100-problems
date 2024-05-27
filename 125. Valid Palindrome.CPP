class Solution {
public:
    bool isPalindrome(string s){
        string x="";
        for(int i=0; i<s.size();++i){
           if(tolower(s[i])>='a'&&tolower(s[i])<='z'){
               x+=tolower(s[i]);
           }else if (s[i]>='0'&&s[i]<='9'){
               x+=s[i];
           }
        } 
        string xc=x;
        reverse(x.begin(),x.end());
        if(xc==x){
            return true;
        }return false;
        
    }
};