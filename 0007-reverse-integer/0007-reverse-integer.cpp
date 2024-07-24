class Solution {
public:
    int reverse(int x) {
        // int ans=0, temp=x<0?-x:x;
        long long ans = 0;
        long long temp = x;
        if(x < 0 ) temp = -temp;
        while(temp > 0){
            long long digit = temp % 10;
            ans = ans*10+digit;
            if(ans > INT_MAX or ans < INT_MIN) return 0;
            temp /= 10;
        }
        if(x < 0) return -ans;
        return ans;
    }
};