class Solution {
public:
    int binary_search(int l,int r,vector<int> &nums){
        
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;                
            }else{
                r=mid;
            }
        }
        return nums[l];
    }
    
    
    int findMin(vector<int> &nums) {
        int r=nums.size()-1;
        return binary_search(0,r,nums);
    }
};
