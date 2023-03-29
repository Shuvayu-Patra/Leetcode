class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        stack<int>s;
        for(int i=2*n-1 ; i>=0 ; i--){
            while(!s.empty() && s.top()<=nums[i%n]){
                s.pop();
            }
            if(s.empty()){
                v[i%n]=-1;
            }
            else{
                v[i%n] = s.top();
            }
            s.push(nums[i%n]);
        }
        return v;
    }
};