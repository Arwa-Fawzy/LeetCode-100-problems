class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int right=numbers.size()-1;
        for(int i=0; i<numbers.size();++i){
            int left=i;
            while(left<right){
                 if(numbers[left]+numbers[right]==target){
                    ans.push_back(left+1);
                    ans.push_back(right+1);
                    return ans;
                }else if(numbers[left]+numbers[right]<target){
                    ++left;
                }else{
                    --right;
                }
            }
           
        }return ans;
    }
};