bool parseBoolExpr(string expression) {
    stack<char>s;
    for(auto i:expression)
    {
        if(i!=')')
        s.push(i);
        else
        {
            stack<char>temp;
            while(!s.empty() && s.top()!='(')
            {
                if(s.top()!=',')
                temp.push(s.top());
                s.pop();
            }
            s.pop();
            if(s.top()=='!')
            {
                s.pop();
                s.push(temp.top()=='f' ? 't' : 'f');
            }
            else if(s.top()=='|')
            {
                s.pop();
                bool result=false;
                while(!temp.empty())
                {
                    if(temp.top()=='t')
                    result=result | true;
                    else
                    result =result | false;
                    temp.pop();
                }
                s.push(result==false ? 'f' : 't');
            }
            else
            {
                s.pop();
                bool result=true;
                while(!temp.empty())
                {
                    if(temp.top()=='t')
                    result=result & true;
                    else
                    result =result & false;
                    temp.pop();
                }
                s.push(result==false ? 'f' : 't');
            }
        }
    }
    return s.top()=='f' ? false : true;
        
    }