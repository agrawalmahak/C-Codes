//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        string str=to_string(n);
        int len=str.length();
        int m=n;
        int num=stoi(str);
        int temp=0;
        while(n>0)
        {
            int rem=n%10;
            temp=temp + pow(rem,len);
            n/=10;
        }
        
        if(m==temp)
        {
            return "true";
        }
        else
        return "false";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
