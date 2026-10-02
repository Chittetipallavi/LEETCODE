class Solution {
public:
    int numSub(string s) {
      long long cnt=0;
      long long ans=0;
      long long modulus = 1e9+7;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='1')
        {
            cnt++;
        }
        else
        {
            ans+=((cnt*(cnt+1))/2);
            cnt=0;
        }
      } 
      ans+=((cnt*(cnt+1))/2);
      return ans%modulus; 
    }
};