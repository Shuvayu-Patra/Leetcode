class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int ans = 1;
        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        for(auto it : s){
            if(s.find(it-1) == s.end()){
                int longest = 1;
                int x = it;
                while(s.find(x+1) != s.end()){
                    x = x+1;
                    longest++;
                }
                ans = max(ans,longest);
            }
            
        }
        return ans;
    }
};