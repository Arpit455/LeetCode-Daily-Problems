class Solution {
public:
  

int minTimeToReach(vector<vector<int>>& moveTime) {
    int m = moveTime.size();
    int n = moveTime[0].size();

    vector<vector<int>> visited(m, vector<int>(n, INT_MAX));
    visited[0][0]=0;
    queue<pair<int,pair<int,int>>>q;
    q.push({0,{0,0}});

    int dir_x[4]={0,1,0,-1};
    int dir_y[4]={1,0,-1,0};

    while(!q.empty())
    {
        int time =q.front().first;
        int r=q.front().second.first;
        int c=q.front().second.second;

        q.pop();

        for(int i=0;i<4;i++)
        {
            int new_r=dir_x[i]+r;
            int new_c=dir_y[i]+c;
            if(new_r>=0 && new_c>=0 && new_r<m && new_c<n)
            {
                int new_time=time>=moveTime[new_r][new_c] ? 0 : moveTime[new_r][new_c]-time;
                if(visited[new_r][new_c]>time+new_time+1){
                visited[new_r][new_c]=new_time+time+1;
                q.push({time+new_time+1,{new_r,new_c}});
                }
            }
        }

    }

    return visited[m-1][n-1];
}
};