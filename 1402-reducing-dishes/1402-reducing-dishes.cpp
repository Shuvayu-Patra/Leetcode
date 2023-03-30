class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int a = 0 , b=0;
        for(int i=satisfaction.size()-1 ; i>= 0 ; i--){
            a += satisfaction[i];
            if(a<0)
                break;
            b+=a;
        }
        return b;
    }
};