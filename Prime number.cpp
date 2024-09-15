//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        if(N<2)
        return 0;
        int cnt=0;
        for(int i=2;i<=sqrt(N);i++)
        {
            if(N%i==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        return 1;
        else
        return 0;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
