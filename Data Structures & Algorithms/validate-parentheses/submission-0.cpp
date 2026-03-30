class Solution {
public:
    bool isValid(string s) {
          stack<char> stac;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stac.push(s[i]);
            }            
            else
            {
                if(!stac.empty())
                {
                    char ch = stac.top();
                    if(s[i] == ')' && ch == '(')
                    {
                        stac.pop();
                    }              
                    else if(s[i] == '}' && ch == '{')
                    {
                        stac.pop();
                    } 
                    else if(s[i] == ']' && ch == '[')
                    {
                        stac.pop();
                    }    
                    else
                        return false;       
                }    
                else
                    return false;                     
            }

        }

        if(stac.empty())
            return true;
        else
            return false;

    }
};
