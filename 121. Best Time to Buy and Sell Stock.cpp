class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0, right=1,mx=0;
        while(right<prices.size()){
            if(prices[left]<prices[right]){
                if(mx<prices[right]-prices[left]){
                    mx=prices[right]-prices[left];
                }
            }else{
                left=right;
            }right++;
        }
        
        return mx;
    }
};