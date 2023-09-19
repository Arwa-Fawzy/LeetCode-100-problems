class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        long long s=0;
        for(int i=0; i<nums.size(); ++i){
            s=nums[i];
            for(int j=i+1; j<nums.size(); ++j){
                s+=nums[j];
                if(s==target){
                    return{i,j};
                }s=nums[i];
            }
        }
        return{};
    }
};
