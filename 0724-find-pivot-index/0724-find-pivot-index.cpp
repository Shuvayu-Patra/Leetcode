class Solution {
//     int leftsum(int a , vector<int>&nums){
//         int sum = 0;
//         for(int i=0 ; i<a ; i++){
//             sum += nums[i];
//         }
//         return sum;
//     }
    
//     int rightsum(int a , vector<int>nums){
//         int sum = 0;
//         for(int i=a+1 ; i<nums.size() ; i++){
//             sum += nums[i];
//         }
//         return sum;
//     }
    
    
    int prefixsum(int a , vector<int>& nums,int b){
        int sum = 0; 
        for(int i=a ; i<b ; i++){
            sum += nums[i];
        }
        return sum;
    }
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
        //     int s = leftsum(i,nums);
        //     int H = rightsum(i,nums);
        //     if(s == H) return i;
        // }
            
            int s = prefixsum(0,nums,i);
            int H = prefixsum(i+1,nums,n);
            if(s == H) return i;
        }
        return -1;
    }
};