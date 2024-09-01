class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& q, int k) {
        vector<int>ans;
        priority_queue<int>pq;
        for(int i=0; i<q.size(); i++){
            pq.push(abs(q[i][0]) + abs(q[i][1]));
            if(pq.size() == k) ans.push_back(pq.top());
            else if(pq.size() > k){
                pq.pop();
                ans.push_back(pq.top());
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};