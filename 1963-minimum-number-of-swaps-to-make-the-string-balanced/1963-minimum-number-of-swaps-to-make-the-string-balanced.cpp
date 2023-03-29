class Solution {
public:
    int minSwaps(string s) {
        int count = 0;
        int count2 = 0;
        int j=s.size()-1;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == '[') count++;
            else count--;
            
            if(count < 0){
                while(i<j and s[j]=='[') j--;
                swap(s[i],s[j]);
                count2++;
                count=1;
            }
        }
        return count2;
        
    }
};