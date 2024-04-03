int dp[7][7];
    bool isPossible(int i,int j,int m,int n,int pos,vector<vector<char>>& board,string word)
    {

        if(pos>=word.size())
        return true;
        if(i<0 ||j<0 ||i>=m || j>=n)
        return false;
        if(dp[i][j]!=-1)
        return false;
        if(board[i][j]!=word[pos])
        return false;
        
        dp[i][j]=1;  
        bool left=isPossible(i,j-1,m,n,pos+1,board,word);
        bool right=isPossible(i,j+1,m,n,pos+1,board,word);
        bool up=isPossible(i-1,j,m,n,pos+1,board,word);
        bool down=isPossible(i+1,j,m,n,pos+1,board,word);
        if(up||down||left||right)
        return true;
        else
        {
            dp[i][j]=-1;
            return false;
        }
        
    }
    bool exist(vector<vector<char>>& board, string word) {

        bool possible=false;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<7;i++)
        {
            for(int j=0;j<7;j++)
            dp[i][j]=-1;
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                possible=isPossible(i,j,m,n,0,board,word)||possible;
            }
        }
        return possible;
        
    }