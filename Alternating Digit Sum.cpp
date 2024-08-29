class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int len=s.length();
        int count= 0;
        int count1=0;
        for(int i=0;i<len;i+=2)
        {
            
                count+=s[i]-'0'; //string ko number me convert by ASCII value
        }
              for(int i=1;i<len;i+=2)
        {
            
              count1+=s[i]-'0';
        }
           
        
        int ans=count-count1;
        return ans;
    }
};
