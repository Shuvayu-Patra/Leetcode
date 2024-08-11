class Solution {
public:
    int func(vector<int>& v, int capacity){
        int days = 0, load = 0;
        for(int i=0; i<v.size(); i++){
            if((load+v[i]) > capacity){
                days = days + 1;
                load = v[i];
            }
            else{
                load += v[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = INT_MIN, sum = 0;
        for(int i=0; i<weights.size(); i++){
            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }
        int l = maxi, h = sum;
        while(l <= h){
            int mid = (l+h)/2;
            if(func(weights,mid) >= days){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return l;
    }
};