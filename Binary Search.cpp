class Solution {
public:
    int binary_search(int l, int r, int target,vector<int>& nums){
        if(l>r){
            return -1;
        } 
        int mid = l+(r-l)/2;
        if(target==nums[mid]){
            return mid;
        }else if(nums[mid]<target){
            mid=l+(r-l)/2;
            binary_search(mid+1,r,target,nums);
        }else{
            mid=l+(r-l)/2;
            binary_search(l,mid-1,target,nums);
        }
        
    }
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        return binary_search(l,r,target,nums);
    }
};
