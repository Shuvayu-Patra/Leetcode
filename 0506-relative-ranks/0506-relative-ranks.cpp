class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size());
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<score.size(); i++){
            pq.push({score[i], i});
        }
        
        // while(!pq.empty()){
        //     cout << pq.top().first << " ";
        //     cout << pq.top().second << " ";
        //     pq.pop();
        // }
        
        int place = 1;
        while(!pq.empty()){
            int oInd = pq.top().second;
            pq.pop();
            if(place == 1) ans[oInd] = "Gold Medal";
            else if(place == 2) ans[oInd] = "Silver Medal";
            else if(place == 3) ans[oInd] = "Bronze Medal";
            else ans[oInd] = to_string(place);
            place++;
        }
        return ans;
    }
};