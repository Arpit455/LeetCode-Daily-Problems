static bool comparator(pair<int,int> p1,pair<int,int>p2)
{
    if(p1.first==p2.first)
    return p1.second>p2.second;
    else
    return p1.first<p2.first;
}
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int>m;
        for(auto i:nums)
        m[i]++;
        vector<pair<int,int>>v;
        for(auto i:m)
        v.push_back({i.second,i.first});

        sort(v.begin(),v.end(),comparator);

        vector<int>ans;
        for(auto i:v)
        {
            for(int j=0;j<i.first;j++)
            ans.push_back(i.second);
        }
        return ans;
        
    }