class Solution {
public:
    int countHomogenous(string s) {
       long long cnt=1;
       long long ans=0;
       long long mod=1e9+7;
       for(int i=0;i<s.size();i++)
       {
        if(s[i]!=s[i+1])
        {
        ans+=(cnt*((cnt+1)))/2;
         cnt=1; 
        }
        else
        {
         cnt++;
        }
       } 
       ans+=(cnt*((cnt+1)))/2;
       ans=ans-1;
       return ans%mod;
    }
};