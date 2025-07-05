class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int,int>freq;

        for(auto i:arr)
        freq[i]++;

        int ans=-1;

        for(auto i:freq)
        {
            if(i.first==i.second)
            ans=max(ans,i.first);
        }

        return ans;
        
    }
};