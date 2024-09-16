//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    vector<int>arr;
    while(N>0)
    {
        int m=N%2;
        arr.push_back(m);
        N/=2;
    }
    int i=0;
    int j=arr.size()-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
   for(int i=0;i<arr.size();i++)
   {
  cout<<arr[i];
   }
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
