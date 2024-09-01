vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        vector<vector<int>>grid;

        if(m*n!=original.size())
        return grid;
        int start=0;
        for(int i=0;i<m;i++)
        {
           vector<int>temp;
           for(int j=0;j<n;j++)
           {
              temp.push_back(original[start]);
              start++;
           }
           grid.push_back(temp);

        }
        return grid;
        
    }