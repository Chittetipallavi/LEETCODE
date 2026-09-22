class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        int n=senate.size();
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')
            {
                q1.push(i);
            }
            if(senate[i]=='D')
            {
                q2.push(i);
            }
        }
        while(!q1.empty() && !q2.empty())
        {
            int v1=q1.front();
            int v2=q2.front();
            if(v1<v2)
            {
                q2.pop();
                q1.push(v1+n);
                q1.pop();
            }
            else
            {
                q1.pop();
                q2.push(v2+n);
                q2.pop();
            }
        }
        if(!q1.empty()) return "Radiant";
        else
        {
            return "Dire";
        }
        
    }
};