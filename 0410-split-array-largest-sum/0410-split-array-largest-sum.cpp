class Solution {
public:
    int func(vector<int>& v, int pages, int k){
        int stuCnt = 1, pageHolding = 0;
        for(int i=0; i<v.size(); i++){
            if((pageHolding + v[i]) <= pages){
                pageHolding += v[i];
            }
            else{
                stuCnt++;
                pageHolding = v[i];
            }
        }
        return stuCnt;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l = *max_element(nums.begin(), nums.end());
        int h = accumulate(nums.begin(), nums.end(), 0);
        while(l <= h){
            int mid = l+(h-l)/2;
            int stuCnt = func(nums,mid,k);
            if(stuCnt <= k){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};