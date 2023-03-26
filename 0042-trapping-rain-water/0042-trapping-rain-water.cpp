class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n);
        left[0]=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=max(left[i-1],height[i]);
        }
        vector<int>right(n);
        right[height.size()-1]=height[height.size()-1];
        for(int j=height.size()-2;j>=0;j--){
            right[j]=max(right[j+1],height[j]);
        }
        int trap=0;
        vector<int>water(n);
        for(int i=0;i<height.size();i++){
            water[i]=min(left[i],right[i]);
            trap+=water[i]-height[i];
        }
        return trap;
    }
};