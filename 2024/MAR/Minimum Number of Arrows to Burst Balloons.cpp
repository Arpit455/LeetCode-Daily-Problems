int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end());
        int min_arrow=1;
        int prev_end=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=prev_end )
            {
                prev_end=min(points[i][1],prev_end);
            }
            else
            {
                min_arrow++;
                prev_end=points[i][1];
            }

            
        }
        return min_arrow;
        
    }