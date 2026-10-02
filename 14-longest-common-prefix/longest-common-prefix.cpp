class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int k=strs.size();
        string s1=strs[0];
        string s2=strs[k-1];
        int i=0,j=0;
        string s3="";
        while(i<s1.size() && j<s2.size())
        {
            if(s1[i]==s2[j])
            {
                s3+=s1[i];
                i++;
                j++;
            }
            else
            {
                break;
            }
        }
        return s3;
    }
};