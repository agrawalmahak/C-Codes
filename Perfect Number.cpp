int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
class Solution {
  public:
    int isPerfect(int N) {
        // code here
        int sum=0;
      
        int num=N;
        while(N!=0)
        {  int d=N%10;
            sum=sum+fact(d);
            N=N/10;
        }
        if(num==sum)
        {
            return 1;
        }
        return 0;
    }
};
