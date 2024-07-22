class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         
       vector<int>ans;
       ans.push_back(-1);
       int n=arr.size(); 
       if (n == 0) return {};  // Handle the empty array case
        if (n == 1) return ans;
        ans.push_back(arr[n-1]);
        if (n==2){
            reverse(ans.begin(),ans.end()); 
            return ans;
        }
        int mx=max(arr[n-1],arr[n-2]);
         for(int i=arr.size()-3;i>=0; --i){
            ans.push_back(mx);
            if(arr[i]>mx){
                mx=arr[i];
            }
       }
       reverse(ans.begin(),ans.end()); 
         return ans;
    }
};