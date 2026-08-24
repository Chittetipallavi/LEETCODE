class Solution {
public:
    bool isPalindrome(string s) {
          string cleaned="";
         for(char ch:s)
         {
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')||(ch>='0'&&ch<='9'))
            {
                cleaned+=ch;
            }
         }
        
        transform(cleaned.begin(),cleaned.end(),cleaned.begin(),::tolower);
       int i=0;
       int j=cleaned.size()-1;
       while(i<j)
       {
        if(cleaned[i]==cleaned[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }

       }
       return true;
    }
};