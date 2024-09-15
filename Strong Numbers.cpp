//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isStrong(int N) {
        // code here
        int m=N;
        int temp=0;
        while(N>0)
        {
            temp=temp+fact(N%10);
            N/=10;
            
        }
        if(temp==m)
        return 1;
        else
        return 0;
    }
    int fact(int n)
    {
        int fac=1;
        for(int i=1;i<=n;i++)
        {
            fac=fac*i;
        }
        return fac;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
