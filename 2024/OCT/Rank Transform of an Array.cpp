vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> ranks;
        
        vector<int>ans=arr;
        sort(arr.begin(), arr.end());
        int rank = 1;
        for (auto i : arr) {
            if (ranks.find(i) == ranks.end()) {
                ranks[i] = rank;
                rank++;
            }
        }

        for(auto i:ranks)
        cout<<i.first<<" "<<i.second<<"\n";

        for (int i = 0; i < arr.size(); i++) {
             ans[i]=ranks[ans[i]];
        }
        return ans;
    }