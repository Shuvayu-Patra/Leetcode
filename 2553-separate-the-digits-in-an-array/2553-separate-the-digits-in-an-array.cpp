class Solution {
public:
    void separate(int a , vector<int> &v){
        string s = to_string(a);
        for(int i=0 ; i<s.size() ; i++){
            v.push_back(s[i] - '0');
        }
    }
    
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0 ; i<nums.size() ; i++){
            separate(nums[i],v);
        }
        return v;
    }
};