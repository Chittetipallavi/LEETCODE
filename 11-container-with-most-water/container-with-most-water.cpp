class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
        int area=0;
        int maxi=-999;
        while(i<j)
        {
            int val=min(height[i],height[j]);
            area=val*(j-i);
            maxi=max(maxi,area);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxi;
    }
};