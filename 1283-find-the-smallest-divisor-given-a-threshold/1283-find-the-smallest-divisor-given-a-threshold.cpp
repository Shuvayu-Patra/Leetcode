class Solution {
public:
    int CountSum(vector<int>& v, int m){
        int sum = 0;
        for(int i=0; i<v.size(); i++){
            sum += ceil((double)(v[i])/(double)(m));
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int l = 1, h = maxi;
        while(l <= h){
            int mid = (l+h)/2;
            if(CountSum(nums,mid) <= threshold){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};