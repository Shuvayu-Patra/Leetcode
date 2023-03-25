class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>odd;
        vector<int>even;
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++){
            if(i&1) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        
        sort(even.begin() , even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        
        int j=0 , k=0 ;
        for(int i=0 ; i<n ; i++){
            if(i%2 == 0){
                ans.push_back(even[j++]);
            }
            else{
                ans.push_back(odd[k++]);
            }
        }
        return ans;
    }
};