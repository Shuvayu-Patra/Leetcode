class Solution {
public:
    bool winnerOfGame(string colors) {
        int aMove = 0, bMove=0;
        for(int i=1; i<colors.size()-1; i++){
            if(colors[i-1] == colors[i] && colors[i]==colors[i+1]){
                if(colors[i] == 'A') aMove++;
                else bMove++;
            }
        }
        return aMove>bMove;
    }
};