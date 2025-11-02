class Solution {
    
    private void helper(int i ,int j , int m, int n ,int [][] visited)
    {
        int r=i-1,c=j;
        // Up direction
        while(r>= 0 && visited[r][c]!=1 && visited[r][c]!=2)
        {
           visited[r][c]=3;
           r--;
        }
        r=i;
        c=j+1;

        // right direction
        while( c<n && visited[r][c]!=1 && visited[r][c]!=2)
        {
           visited[r][c]=3;
           c++;
        }

        r=i+1;c=j;

        //down direction
        while(r< m  && visited[r][c]!=1 && visited[r][c]!=2)
        {
           visited[r][c]=3;
           r++;
        }

        r=i;c=j-1;

        //left direction
        while(c>=0  && visited[r][c]!=1 && visited[r][c]!=2)
        {
           visited[r][c]=3;
           c--;
        }

        return;

    }
    public int countUnguarded(int m, int n, int[][] guards, int[][] walls) {

        int [][] visited;

        visited=new int [m][n];

        for(int i=0;i<guards.length;i++)
        {
            visited[guards[i][0]][guards[i][1]]=1;
        }
        for(int i=0;i<walls.length;i++)
        {
            visited[walls[i][0]][walls[i][1]]=2;
        }
        for(int i=0;i<guards.length;i++)
        {
            helper(guards[i][0], guards[i][1],m,n,visited);
        }

        int unguarded=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(visited[i][j]==0)
                unguarded++;
            }
        }

        return unguarded;
        
    }
}