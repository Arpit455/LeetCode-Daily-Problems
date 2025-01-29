class DisjointSet
{
    public:
    vector<long long>size,parent;
    DisjointSet(int n)
    {
        size.resize(n+1,1);
        parent.resize(n+1,0);
        for(int i=1;i<n+1;i++)
        parent[i]=i;
    }
    void unionbysize(int a,int b)
    {
       int p_a=nodeparent(a);
       int p_b=nodeparent(b);

       if(size[p_a]>=size[p_b])
       {
        size[p_a]+=size[p_b];
        parent[p_b]=p_a;
       } 
       else
       {
        size[p_b]+=size[p_b];
        parent[p_a]=p_b;
       }
    }
    int nodeparent(int a)
    {
        if(a==parent[a])
        return a;
        return parent[a]=nodeparent(parent[a]);
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n=edges.size();
        vector<int>ans(2);

        DisjointSet ds(n);

        for(auto i:edges)
        {
            if(ds.nodeparent(i[0])==ds.nodeparent(i[1]))
            {
                ans[0]=i[0];
                ans[1]=i[1];
            }
            else
            ds.unionbysize(i[0],i[1]);
        }
        return ans;

        
    }
};