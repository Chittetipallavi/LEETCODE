class Solution {
public:
    string removeStars(string s) {
    stack<char>st;
    vector<char>v;
    string s2;
    for(int i=0;i<s.size();i++)
    {
    if(s[i]!='*')
    {
        //st.push(s[i]);
        v.push_back(s[i]);
    }
    if(s[i]=='*')
    {
        //st.pop();
        v.pop_back();
    }
    }
   /* while(!st.empty()){
    char ch=st.top();
    st.pop();
    s2+=ch;
    st.top();
    }
    reverse(s2.begin(),s2.end());
    */
    for(char ch:v)
    {
        s2+=ch;
    }
    return s2;
    }
};