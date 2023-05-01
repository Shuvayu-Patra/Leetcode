class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        double count = 0;
        sort(salary.begin(),salary.end());
        for(double i = 1; i<salary.size()-1;i++){
            sum+=salary[i];
            count++;
        }
        double ans = sum/count;
        return ans;
    }
};