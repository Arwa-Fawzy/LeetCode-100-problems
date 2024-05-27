class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long x=1,z=0,res;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                ++z;
            }
            x*=nums[i];
            
        }if(z==1){
                mult;
            }else if(z>1){
                res=0;
            }
        vector<int>r;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0&&z==0){
                r.push_back(x/nums[i]);
            }else if(nums[i]!=0&&z>0){
                r.push_back(0);
            }else{
                r.push_back(res);
            }
        }return r;
    }
};