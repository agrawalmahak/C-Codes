#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

    int func(int n)
    {
        int sum1=0;
        while(n!=0)
    {
        int d=n%10;
        sum1+=d;
        n=n/10;
    }
    return sum1;
    }
int solve(int n) {
    int ans=func(n);
    int i=2;
    int sum=0;
    int num=n;
    while(i<=num){
    while(num%i==0)
    {
        sum+=func(i);
        num/=i;
    }
    i++;
    }
    if(sum==ans)
    return 1;
    else
     return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = solve(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
