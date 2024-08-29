class Solution {
public:
    int func(vector<int>v, int mid){
        int sum = 0;
        for(int i=0; i<v.size(); i++){
            sum += ceil((double)v[i]/(double)mid);
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int h = *max_element(nums.begin(), nums.end());
        while(l <= h){
            int mid = (l+h)/2;
            int newThres = func(nums,mid);
            if(newThres > threshold){
                l = mid + 1;
            }
            else h = mid - 1;
        }
        return l;
    }
};