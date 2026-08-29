class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>frq;
        for(char ch:s)
        {
            frq[ch]++;
        }
        int idx;
        int cnt=-1;
        for(char ch:s)
        {
            cnt++;
            {
                if(frq[ch]==1)
                 {
                  return cnt;
                 }
            }  
        }
        
        return -1;
        
    }
};