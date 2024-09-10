#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
   vector<int>arr(n);
    vector<int>arr1(m);
    int p,q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
        
    }
    int cnt=0;
    vector<int>arr2;
    sort(arr.begin(),arr.end());
    sort(arr1.begin(),arr1.end());
    int i=0,j=0;
  while(i<n && j<m)
    {
      
        if(arr[i]==arr1[j])
        {
            arr2.push_back(arr[i]);
            cnt++;
            i++;j++;
        }
        else if(arr[i]<arr1[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    
    cout<<cnt<<endl;
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
