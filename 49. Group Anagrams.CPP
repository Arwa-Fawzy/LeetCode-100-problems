class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        map<string,vector<string>>mp;
        for(int i=0; i<strs.size();++i){
            string c=strs[i];
            sort(c.begin(),c.end());
            mp[c].push_back(strs[i]);
        }
        vector<vector<string>>r;
    for(auto it=mp.begin(); it!=mp.end();++it){
        r.push_back(it->second);
    }
        
    return r;
    }
};