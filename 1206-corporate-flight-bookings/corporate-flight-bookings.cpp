class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int sum=0;
        vector<int>res(n+2,0);
        for(int i=0;i<bookings.size();i++)
        {
            int l=bookings[i][0];
            int r=bookings[i][1];
            int val=bookings[i][2];
            res[l]+=val;
            res[r+1]-=val; 
        }
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            sum+=res[i];
            ans.push_back(sum);
        }
        return ans;
    }
};