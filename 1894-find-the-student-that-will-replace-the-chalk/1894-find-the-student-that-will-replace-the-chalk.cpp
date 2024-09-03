class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int ans = 0;
        k = k%accumulate(chalk.begin(), chalk.end(), 0l);
        vector<long long>v;
        long long pSum = 0;
        for(int i=0; i<chalk.size(); i++){
            pSum += chalk[i];
            v.push_back(pSum);
        }
        int l=0, h = v.size()-1;
        while(l <= h){
            int mid = l+(h-l)/2;
            if(v[mid] > k){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};