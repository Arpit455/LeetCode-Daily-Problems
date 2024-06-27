int findCenter(vector<vector<int>>& edges) {

        int nodes=edges.size()+1;
        vector<int>v(nodes+1,0);
        for(int i=0;i<nodes-1;i++)
        {
            v[edges[i][0]]++;
            v[edges[i][1]]++;
            if(v[edges[i][0]]>1)
            return edges[i][0];
            if( v[edges[i][1]]>1)
            return edges[i][1];
        }
        return 0;
        
    }