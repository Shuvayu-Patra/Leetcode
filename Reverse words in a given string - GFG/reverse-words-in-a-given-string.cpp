//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        s += ".";
        string temp = "";
        vector<string>ans;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] != '.') temp += s[i]; 
            else{
                ans.push_back(temp);
                ans.push_back(".");
                temp = "";
            }
        }
        temp = "";
        reverse(ans.begin() , ans.end());
        for(int i=1 ; i<ans.size() ; i++){
            temp += ans[i];
        }
        return temp;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends