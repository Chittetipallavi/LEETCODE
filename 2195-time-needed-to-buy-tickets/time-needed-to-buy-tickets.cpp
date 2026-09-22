class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int m=tickets.size();
        queue<int>q;
        int turns=0;
        for(int i=0;i<m;i++)
        {
            q.push(i);
        }
        while(tickets[k]>0)
        {
            int val=q.front();
            q.pop();
            tickets[val]--;
            if(tickets[val]>0)
            {
            q.push(val);
            }
            turns++;
        }

        return turns;
    }
};