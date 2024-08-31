class Solution {
public:
    int cntStu(vector<int>v, int maxP){
        int cnt = 1, pageHold = 0;
        for(int i=0; i<v.size(); i++){
            if((pageHold+v[i]) > maxP){
                cnt++;
                pageHold = v[i];
            }
            else pageHold += v[i];
        }
        return cnt;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int h = accumulate(nums.begin(), nums.end(), 0);
        while(l <= h){
            int mid = (l+h)/2;
            int cnt = cntStu(nums,mid);
            if(cnt > k) l = mid + 1;
            else h = mid - 1;
        }
        return l;
    }
};