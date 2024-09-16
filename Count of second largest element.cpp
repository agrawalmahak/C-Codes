#include<vector>
using namespace std;
int result (const vector<int>arr)
{
    int n=arr.size();
    set<int>s(arr.begin(),arr.end());
    if(s.size()<2)
        return 0;
    auto it=s.rbegin(); //reverse number for second largest
    ++it; //move to second largest element
   int slargest=*it;
    int cnt=0;
     for(int i=0;i<n;i++)
    {
        if(arr[i]==slargest)
        {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  int ans;
      ans= result(arr);
    cout<<ans;
    
}
