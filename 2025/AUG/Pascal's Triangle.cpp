class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>pascal;

        pascal.push_back({1});

        for(int i=2;i<=numRows;i++)
        {
            vector<int>temp(i,1);
            for(int j=1;j<i-1;j++)
            {
                temp[j]=pascal[i-2][j-1]+pascal[i-2][j];
            }

            pascal.push_back(temp);
        }

        return pascal;
        
    }
};