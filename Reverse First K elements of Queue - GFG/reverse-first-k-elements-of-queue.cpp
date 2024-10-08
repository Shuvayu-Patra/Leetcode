//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    //pop fiest k elements from q and put into stack
    stack<int>s;
    
    for(int i=0 ; i<k ; i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    //Fetch from stack nand put inyo q for reversing
    
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    //fetch first (n-k) elements ans push back
    
    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}