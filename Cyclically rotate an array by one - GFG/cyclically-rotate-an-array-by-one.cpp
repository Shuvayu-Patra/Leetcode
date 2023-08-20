//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    vector<int>v;
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    int temp = v[v.size()-1];
    v.insert(v.begin(),temp);
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        arr[i] = v[i];
    }
    
}