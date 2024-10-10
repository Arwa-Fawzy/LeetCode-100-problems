class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;

    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        mp[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto& values=mp[key]; string ans="";
        int l=0, r=values.size()-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(values[mid].first<=timestamp){
                ans=values[mid].second;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }

        return ans;
    }
};
