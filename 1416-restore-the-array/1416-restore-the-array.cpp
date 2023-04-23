class Solution {
public:
    int solve(string &s , long k , vector<int>&dp , int i){
        if(i==s.size()) return 1;
        if(s[i]=='0') return 0;
        if(dp[i] != -1) return dp[i];
        long ans=0 , num=0;
        for(int j=i ; j<s.size() ; j++){
            num = num*10 + s[j] - '0';
            if(num > k) break;
            ans = (ans+solve(s,k,dp,j+1)) % 1000000007;
        }
        return dp[i]=ans;
    }
    
    int numberOfArrays(string s, int k) {
        int n = s.size();
        vector<int>dp(n+1 , -1);
        return solve(s,k,dp,0);
    }
};