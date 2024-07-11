string reverseParentheses(string s) {

        stack<char>st;
        for(auto i:s)
        {
            if(i==')')
            {
               queue<char>temp;
               while(st.top()!='(')
               {
                temp.push(st.top());
                st.pop();
               }
               st.pop();
               while(!temp.empty())
               {
                st.push(temp.front());
                temp.pop();
               } 
            }
            else
            st.push(i);
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
      reverse(ans.begin(),ans.end());
      return ans;

        
    }