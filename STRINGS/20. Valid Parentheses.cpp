class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        stack<char> s1;
        char check;
        if(s[0] == ')' || s[0] == ']' || s[0] == '}')
        {
            return false;
        }
        if(s[size-1] == '(' || s[size-1] == '[' || s[size-1] == '{')
        {
            return false;
        }
        
        for(int i = 0; i < size; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                s1.push(s[i]);
            }
            else 
            {
                if(s[i] == ')' &&  !s1.empty())
                {
                    check = s1.top();
                    if( check == '(')
                    {
                        s1.pop();
                    }
                    else
                    {
                        s1.push(s[i]);
                    }
                }
                
                else if(s[i] == '}' &&  !s1.empty())
                {
                    check = s1.top();
                    if(check == '{')
                    {
                        s1.pop();
                    }
                    else
                    {
                       s1.push(s[i]); 
                    }
                }
                
                else if(s[i] == ']' &&  !s1.empty())
                {
                    check = s1.top();
                    if(check == '[')
                    {
                        s1.pop();
                    }
                    else
                    {
                        s1.push(s[i]);
                    }
                }
                else
                {
                    return false;
                }
                
            }
        }
        if(s1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
