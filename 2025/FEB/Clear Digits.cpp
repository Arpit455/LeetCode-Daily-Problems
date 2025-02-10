string clearDigits(string s) {

        stack<char>st;

        for(auto i:s)
        {
            if(i>= 97 && i <123)
            st.push(i);
            else
            st.pop();
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