int slidingPuzzle(vector<vector<int>>& board) {

        vector<vector<int>> v = {{1, 3}, {0, 2, 4}, {1, 5},
                                 {0, 4}, {1, 3, 5}, {2, 4}};
        string s = "", ans = "123450";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++)
                s += to_string(board[i][j]);
        }
        unordered_set<string> st;
        st.insert(s);
        queue<string> q;
        q.push(s);
        int count = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                if (q.front() == ans)
                    return count;
                string temp = q.front();
                q.pop();
                for (int j = 0; j < 6; j++) {
                    if (temp[j] == '0') {
                        for (int k = 0; k < v[j].size(); k++) {
                            string temp2 = temp;
                            swap(temp2[j], temp2[v[j][k]]);
                            if (st.count(temp2) == 0) {
                                st.insert(temp2);
                                q.push(temp2);
                            }
                        }
                    }
                }
            }
            count++;
        }

        return -1;
    }