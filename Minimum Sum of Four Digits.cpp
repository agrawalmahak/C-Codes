class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        int n=s.length();
        sort(s.begin(),s.end());
        int num1=0,num2=0;
        
             num1=s[2]-'0';
             num2=s[3]-'0';
             num1+=(s[0]-'0')*10;
             num2+=(s[1]-'0')*10;
        
        return num1+num2;
    }
};
