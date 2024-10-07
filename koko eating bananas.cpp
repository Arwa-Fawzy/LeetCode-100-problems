class Solution {
public:
    int binary_search(int l, int r, vector<int>& piles, int h, int mn){
        int mid=l+(r-l)/2;
        if(l>=r){
            return l;
        }int sum=0;
        for(int i=0; i<piles.size();++i){
            sum+=ceil((double)piles[i]/mid);
        }
         if(sum>h){
            return binary_search(mid+1,r,piles,h,mn);
        }else{
            mn=min(mn,mid);
            return binary_search(l,mid,piles,h,mn);
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    sort(piles.begin(),piles.end());
      int sz=piles.size();
      
      int mn=piles[sz-1], l=1,r=piles[sz-1];
      return binary_search(l,r,piles,h,mn);
      
    }
};
