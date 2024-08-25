class Solution {
public:
    bool isEqual(string s1, string s2){
        int len1 = s1.size(), len2 = s2.size();
        int maxlen = max(len1, len2);
        while(len1 != maxlen){
            s1 = '0' + s1; 
            len1++;
        } 
        while(len2 != maxlen){
            s2 = '0' + s2;
            len2++;
        } 
        unordered_map<char, int> m1, m2;
        int diff = 0;
        for(int i=0; i<maxlen; i++){
            if(s1[i] != s2[i]) diff++;
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if(diff <= 2 and m1==m2) return true;
        else return false;
    }
    
    int countPairs(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                ans += isEqual(to_string(nums[i]) , to_string(nums[j]));
            }
        }
        return ans;
    }
};