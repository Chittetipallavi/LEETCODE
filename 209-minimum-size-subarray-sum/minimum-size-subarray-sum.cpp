class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int mini=INT_MAX;
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
         sum+=nums[i];
         cnt++;
         while(sum>=target)
         {
          cnt=(i-left+1);
          mini=min(mini,cnt);
          sum-=nums[left];
          left++;
         }
        }
        if(mini==INT_MAX) return 0;
        return mini;
        
    }
};