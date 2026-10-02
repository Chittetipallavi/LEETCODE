class Solution {
public:
    string removeStars(string s) {
    stack<char>st;
    string s2;
    for(int i=0;i<s.size();i++)
    {
    if(s[i]!='*')
    {
        st.push(s[i]);
    }
    if(s[i]=='*')
    {
        st.pop();
    }
    }
    while(!st.empty()){
    char ch=st.top();
    st.pop();
    s2+=ch;
    st.top();
    }
    reverse(s2.begin(),s2.end());
    return s2;
    }
};