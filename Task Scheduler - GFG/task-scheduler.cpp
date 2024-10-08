//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        int res = 0,count = 0;
        
        vector<int>ct(26,0);
        
        for(char c:tasks)
        {   
            ct[c-'A']++;
            res = max(res,ct[c-'A']);
        }
        
        for(int x:ct)
        if(x == res)
        count++;
        
        return max(N,res + (res-1)*K + count - 1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends