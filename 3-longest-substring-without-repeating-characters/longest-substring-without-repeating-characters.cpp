class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt=0;
        int maxi=0;
        int left=0;
        set<char>st;
        for(int i=0;s[i]!='\0';i++)
        {
           while(st.count(s[i]))
           {
            st.erase(s[left]);
            left++;
           }
           st.insert(s[i]);
           maxi=max(maxi,i-left+1);
        }
        return maxi;
        
    }
};