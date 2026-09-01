class Solution {
    bool canShip(vector<int>&weights,int dayshave, int k)
    {
        int d=1;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
        if(sum+weights[i]<=k)
        {
            sum+=weights[i];
        }
        else
        {
            d++;
            sum=weights[i];
        }
        }
        return d<=dayshave;
    }
    int getLow(vector<int>&weights)
    {
        int maxi=0;
        for(int i=0;i<weights.size();i++)
        {
            maxi=max(maxi,weights[i]);
        }
        return maxi;
    }
    int getsum(vector<int>&weights)
    {
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        return sum;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=getLow(weights);
        int high=getsum(weights); 
        while(low<high)
        {
            int mid=(low+high)/2;
            if(canShip(weights,days,mid))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};