#include<bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long mx=INT_MIN;
        int x, right=height.size()-1;
        for(int i=0; i<height.size(); ++i){
            int left=i;
            while(left<right){
                if(height[left]<=height[right]){
                    x=height[left];
                }else{
                    x=height[right];
                }
                if(mx<x*(right-left)){
                    mx=x*(right-left);
                }if(height[left]<height[right]){
                    ++left;
                }else{
                    --right;
                }

            }
            
            
        }
        return mx;
    }
    
};