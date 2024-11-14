class Solution {
public:
    int check(int mid, vector<int> &q, int n) {
        int j=0;
        int give = q[j];
        for(int i=0;i<n;i++) {
            if(give<=mid) {
                j++;
                if(j==q.size()) return 1;
                give = q[j];
            } else {
                give-=mid;
            }
        }
        
        return 0;
    }
    int minimizedMaximum(int n, vector<int>& q) {
        int low = 0, high = *max_element(q.begin(), q.end());
        // int total = accumulate(q.begin(), q.end(), 0);
        // int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            // int t = n * mid;
            if(check(mid,q,n)){
                // ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};