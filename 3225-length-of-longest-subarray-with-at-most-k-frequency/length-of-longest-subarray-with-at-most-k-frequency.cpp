class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=0;
        map<int,int>frq;
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
            while(frq[nums[i]]>k)
            {
                frq[nums[left]]--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
        
    }
};