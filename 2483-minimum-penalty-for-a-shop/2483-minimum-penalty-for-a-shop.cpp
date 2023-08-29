class Solution {
public:
    int bestClosingTime(string customers) {
        int maxScore = 0, score=0, hour = -1;
        for(int i=0; i<customers.size(); i++){
            if(customers[i] == 'Y') score += 1;
            else score -= 1;
            if(score > maxScore){
                maxScore = score;
                hour = i;
            }
        }
        return hour+1;
    }
};