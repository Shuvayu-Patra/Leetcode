class Solution {
public:
    vector<int> countBits(int n) {
        // vector<int>ans;
        // for(int i=0; i<=n; i++){
        //     int temp = i;
        //     int set_bits = 0;
        //     while(temp){
        //     if((temp&1) == 1){
        //         set_bits++;
        //     }
        //     temp = temp>>1;
        //     }
        //     ans.push_back(set_bits);
        // }
        // return ans;
        
        vector<int>t(n+1);
        t[0]=0;
        for(int i=1; i<=n; ++i){
            t[i] = t[i/2] + (i%2);
        }
        return t;
    }
};