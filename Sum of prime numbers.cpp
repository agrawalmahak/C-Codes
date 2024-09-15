//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int primeSum(int N){
        // code here
        int temp=0;
        while(N>0)
        {    int m=N%10;
             int n=0;
             bool ans=fact(m);
             if(ans)
             {
            temp=temp+m;
             }
            N/=10;
        }
        return temp;
    }
    int fact(int p)
    {
        if(p<2)
        return false;
        int cnt=0;
        for(int i=2;i<=sqrt(p);i++)
        {
            if(p%i==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        return true;
        else
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
