class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        bool ans1 = false, ans2 = false;
        if(((coordinate1[0] - 'a')%2 == 0) && (coordinate1[1] - '0')%2==1){
            ans1 = true;
        }
        else if(((coordinate1[0] - 'a')%2 == 0) && (coordinate1[1] - '0')%2==0){
            ans1 = false;
        }
        else if(((coordinate1[0] - 'a')%2 == 1) && (coordinate1[1] - '0')%2==0){
            ans1 = true;
        }
        else if(((coordinate1[0] - 'a')%2 == 1) && (coordinate1[1] - '0')%2==1){
            ans1 = false;
        }
        if(((coordinate2[0] - 'a')%2 == 0) && (coordinate2[1] - '0')%2==1){
            ans2 = true;
        }
        else if(((coordinate2[0] - 'a')%2 == 0) && (coordinate2[1] - '0')%2==0){
            ans2 = false;
        }
        else if(((coordinate2[0] - 'a')%2 == 1) && (coordinate2[1] - '0')%2==0){
            ans2 = true;
        }
        else if(((coordinate2[0] - 'a')%2 == 1) && (coordinate2[1] - '0')%2==1){
            ans2 = false;
        }
        return ans1 == ans2;
    }
};