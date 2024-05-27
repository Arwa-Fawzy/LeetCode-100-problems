class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }long long x=nums[0];
        sort(nums.begin(),nums.end()); long long ans=1,mx=1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]-x==1){
                    ans+=1;
                    x=nums[i];

            }else if(nums[i]!=x){
                ans=1;
                x=nums[i];
            }
            mx=max(mx,ans);
        }return mx;
    }
};