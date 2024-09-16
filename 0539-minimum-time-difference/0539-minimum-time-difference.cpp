class Solution {
public:
    int findMinDifference(vector<string>& time) {
        int mini = INT_MAX;
        vector<int>minutes(time.size());
        for(int i=0; i<time.size(); i++){
            minutes[i] = stoi(time[i].substr(0,2)) * 60 + stoi(time[i].substr(3,2));
        }
        
        sort(minutes.begin(), minutes.end());
        
        for(int i=1; i<minutes.size(); i++){
            mini = min(mini, minutes[i]-minutes[i-1]);
        }
        
        mini = min(mini, 24*60-minutes.back()+minutes.front());
        
        return mini;
    }
};