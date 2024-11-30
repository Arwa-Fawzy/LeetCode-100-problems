class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int  i=0; i<stones.size(); ++i){
            pq.push(stones[i]);
        }
        int ans=0;
        while(!pq.empty()){
            int current=pq.top();
            pq.pop();
            if(!pq.empty()){
                if(current==pq.top()){
                    pq.pop();
                    if(pq.empty()){
                        pq.push(0);
                    }
                }else{
                    int x=current-pq.top();
                    pq.pop();
                    pq.push(x);
                }
            }
            
        }
        ans=pq.top();
        return ans;
    }
};
