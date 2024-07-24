class Solution {
public:
    long long reversed(int a){
        long long ans=0;
        while(a > 0){
            int digit = a%10;
            if(ans < INT_MAX/10 or ans > INT_MIN/10) ans = ans*10+digit;
            a /= 10;
        }
        return ans;
    }
    
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long changed = reversed(x);
        return x==changed;
    }
};