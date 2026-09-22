class Solution {
public:
    bool isValid(string s) {
       stack<int>s1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='['||s[i]=='('||s[i]=='{'){
            s1.push(s[i]);

        }
        if(s[i]=='}'||s[i]==')'||s[i]==']'){
            if(s1.empty()) 
            {return false;}
            char c=s1.top();
            if((s[i]=='}' && c=='{') ||(s[i]==']' && c=='[')||(s[i]==')' && c=='('))
            {
                s1.pop();
            }
            else return false;
        }
    }
    if(s1.empty()) return true;
    return false;
    }
    
};