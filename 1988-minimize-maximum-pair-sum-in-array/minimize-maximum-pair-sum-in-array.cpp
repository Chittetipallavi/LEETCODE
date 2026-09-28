class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int i=0;
        int j=nums.size()-1;
        vector<int>ans;
        while(i<j)
        {
         int sum=nums[i]+nums[j];
         i++;
         j--;
         ans.push_back(sum);
         maxi=max(maxi,sum);
        }
        return maxi;

        
    }
};