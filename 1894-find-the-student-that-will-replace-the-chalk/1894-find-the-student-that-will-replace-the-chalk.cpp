class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        k = k%accumulate(chalk.begin(), chalk.end(), 0l);
        long long sum = 0;
        for(int i=0; i<chalk.size(); i++){
            sum += chalk[i];
            if(sum > k){
                return i;
                break;
            }
        }
        return 0;
    }
};