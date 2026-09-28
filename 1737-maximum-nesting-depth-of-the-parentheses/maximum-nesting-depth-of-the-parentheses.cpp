class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxi=0;
        for(int i=0;s[i]!='\0';i++)
        {
        if(s[i]=='(')
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        if(s[i]==')')
        {
            cnt--;
        }
        }
        maxi=max(maxi,cnt);
        return maxi;
        
    }
};