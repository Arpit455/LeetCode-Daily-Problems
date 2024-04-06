string minRemoveToMakeValid(string s) {

        unordered_set<int> remove_position;
        stack<pair<char, int>> st;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ')') {
                while (!st.empty() && st.top().first != '(') {
                    st.pop();
                }
                if (st.empty())
                    remove_position.insert(i);
                else {
                    st.pop();
                }
            } else
                st.push({s[i], i});
        }

        while (!st.empty()) {
            if (st.top().first == '(') {
                remove_position.insert(st.top().second);
            }
            st.pop();
        }
        cout << remove_position.size() << "\n";
        string ans = "";
        int j = 0;
        for (int i = 0; i < s.size(); i++) {

            if (remove_position.count(i) != 0) {
                remove_position.erase(i);
            }

            else {

                ans += s[i];
            }
        }
        return ans;
    }