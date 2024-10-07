int minLength(string s) {
        stack<char>st;
        int removed_pair=0;
        for(auto i:s)
        {
            if(i=='B' && !st.empty() && st.top()=='A'){
            st.pop();
            removed_pair++;
            }
            else if(i=='D' && !st.empty() && st.top()=='C'){
            st.pop();
            removed_pair++;
            }
            else
            st.push(i);
        }
        return s.length()-2*removed_pair;
        
    }