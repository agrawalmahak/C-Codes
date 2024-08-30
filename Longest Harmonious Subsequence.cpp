class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;

        }
        int mx=0,sum=0;
        for(auto i:mp){
            int key=i.first;
            if(mp.count(key+1)){
                sum=i.second + mp[key+1];
                mx=max(sum,mx);
            }
        }
        return mx;
    }
};
