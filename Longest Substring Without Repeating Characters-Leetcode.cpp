class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0,i=0,j=0,n=s.size();
        set<char>st;
        for(;i<n;i++){
            //impossibility
            while(st.count(s[i])>0){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            //check if the condition is satisfied
            int current_length=i-j+1;
            mx=max(current_length,mx);
        }
        return mx;
    }
};
