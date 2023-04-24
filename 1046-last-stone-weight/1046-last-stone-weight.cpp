class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>mh;
        for(auto it : stones){
            mh.push(it);
        }
        while(!mh.empty() and mh.size() != 1){
            int top1 = mh.top();
            mh.pop();
            
            int top2 = mh.top();
            mh.pop();
            
            if(top1 != top2){
                mh.push(abs(top1-top2));
            }
        }
        return mh.size() == 0 ? 0 : mh.top();
    }
};