class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int maxi=1;
        int cnt=1;
        set<int>s;
        for(int i:nums)
        {
            s.insert(i);
        }
        for(int i=1;i<nums.size();i++) 
        {
        if(nums[i]==nums[i-1])
        {
            continue;
        }
        else if(nums[i]==nums[i-1]+1)
        {
            cnt++;
        }
        else
        {
            maxi=max(maxi,cnt);
            cnt=1;
        }
    }
    maxi=max(maxi,cnt);
    return maxi;

    }
};