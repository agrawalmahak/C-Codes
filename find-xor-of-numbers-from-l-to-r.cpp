int getXorUpToN(int n)
{
    if(n%4==1)
    {
        return 1;
    }
    if(n%4==2)
    {
        return n+1;
    }
    if(n%4==3)
    {
        return 0;
    }
    return n;
}
class Solution {
  public:
    int findXOR(int l, int r) {
        // complete the function here
        int a=getXorUpToN(r);
        int b=getXorUpToN(l-1);
        
        int ans =a^b;
        return ans;
    }
};
