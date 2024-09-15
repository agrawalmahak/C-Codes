int main() {
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        int p=i;
        string str=to_string(p);
        int len=str.length();
        int m=i;
        int num=stoi(str);
        int temp=0;
        while(p>0)
        {
            int rem=p%10;
            temp=temp + pow(rem,len);
            p/=10;
        }
        if(temp==m)
        {
            cout<<temp<<endl;
        }
        
    }
}
