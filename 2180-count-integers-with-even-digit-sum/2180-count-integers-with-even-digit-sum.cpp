class Solution {
private:
    bool digitSum(int a){
        int digit = 0;
        while(a != 0){
            digit += a%10;
            a /= 10;
        }
        if(digit % 2 == 0) return true;
        else return false;
    }
public:
    int countEven(int num) {
        
        int count = 0;
        for(int i = 1 ; i <= num ; i++){
            if(digitSum(i)) count++;
        }
        return count;
    }
};