int minSwaps(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(!st.empty() && st.top()=='[' && i==']')
            st.pop();
            else
            st.push(i);
        }
        return (st.size()/2+1)/2;
        
    }