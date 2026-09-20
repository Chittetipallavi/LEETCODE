class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int prod=1;
        int val=0;
        int j=0;
        for(int i=0;s[i]!='\0';i++)
        {
            j++;
            val=int(s[i]);
            val=123-val;
            prod=j*val;
            sum+=prod;
        }
        return sum;
        
    }
};