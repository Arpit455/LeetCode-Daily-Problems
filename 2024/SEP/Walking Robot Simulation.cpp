    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {

        int x=0,y=0,direction=0,max_distance=0;


        set<pair<int,int>>s;
        for(int i=0;i<obstacles.size();i++)
        s.insert({obstacles[i][0],obstacles[i][1]});

        for(int i=0;i<commands.size();i++)
        {
            if(commands[i]==-1)
            direction++;
            else if(commands[i]==-2)
            direction--;
            else
            {
                for(int j=1;j<=commands[i];j++)
                {
                    if(direction%4==0)
                    {
                        if(s.find({x,y+1})==s.end())
                        {
                            y++;
                        }
                        else
                        break;
                    }
                    else if(direction%4==1||direction%4==-3)
                    {
                        if(s.find({x+1,y})==s.end())
                        {
                            x++;
                        }
                        else
                        break;
                    }
                    else if(direction%4==2 || direction%4==-2)
                    {
                        if(s.find({x,y-1})==s.end())
                        {
                            y--;
                        }
                        else
                        break;
                    }
                    else 
                    {
                        if(s.find({x-1,y})==s.end())
                        {
                            x--;
                        }
                        else
                        break;
                    }
                }
            }
            max_distance=max(max_distance,x*x + y*y);

        }
        return max_distance;
        
    }