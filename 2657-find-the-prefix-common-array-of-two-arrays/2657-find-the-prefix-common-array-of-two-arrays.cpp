class Solution {
public:
    int getCount(vector<int>& a, vector<int>& b , int n){
        set<int>s;
        int count = 0 ;
        for(int i=0 ; i<=n ; i++){
            s.insert(a[i]);
        }
        for(int i=0 ; i<=n ; i++){
            if(!s.insert(b[i]).second) count++;
        }
        return count;
    }
    
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        for(int i=0 ; i<A.size() ; i++){
            int count = getCount(A,B,i);
            ans.push_back(count);
        }
        return ans;
    }
};