class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long sum=0;
        int cnt=0;
        int left=0;
        int avg=0;
        int n=nums.size();
        int w=2*k+1;
        vector<int>ans(n,-1);
        if(k==0) return nums;
        int m=2*k+1;
        for (int i=0;i<nums.size();i++) {
            sum+=nums[i];
            cnt++;
            if (cnt==m) {
                avg=sum/m;
                ans[i-k] = avg;
                sum-=nums[left];
                left++;
                cnt--;
            }
        }
        return ans;
    }
};