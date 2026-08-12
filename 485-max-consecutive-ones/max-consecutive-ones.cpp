class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         long long ans1=0;
        vector<int>ans;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                ans1++;
            }
            else{
            if(ans1>maxi)
            {
                maxi=ans1;
            }
            ans1=0;
            }
        }
        if(ans1>maxi)
        maxi=ans1;
        
        return maxi;
        
    }
};