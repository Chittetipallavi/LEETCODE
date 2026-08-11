class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int left=0;
        map<char,int>frq;
        map<char,int>res;
        for(char ch:s1)
        {
            res[ch]++;
        }
        for(int i=0;s2[i]!='\0';i++)
        {
            frq[s2[i]]++;
            if(i>=k-1)
            {
                if(res==frq)
                {
                    return true;
                }
                else
                {
                    frq[s2[left]]--;
                }
                if(frq[s2[left]]==0)
                {
                    frq.erase(s2[left]);
                }
                left++;
            }
        }
        return false;
        
    }
};