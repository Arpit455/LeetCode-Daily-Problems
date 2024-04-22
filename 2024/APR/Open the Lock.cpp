void child(unordered_set<string> &visited,string node,queue<string>&q)
    {
        for(int i=0;i<node.size();i++)
        {
            string temp1=node,temp2=node;
            int up=(temp1[i]-'0'+1)%10;
            int down=((temp2[i]-'0'-1)+10)%10;
            temp1[i]=up+'0';
            temp2[i]=down+'0';
            //cout<<temp1<<" "<<temp2<<"\n";
            if(visited.count(temp1)==0)
            {
                visited.insert(temp1);
                q.push(temp1);
            }
            if(visited.count(temp2)==0)
            {
                visited.insert(temp2);
                q.push(temp2);
            }

        }
        return ;
    }
    int openLock(vector<string>& deadends, string target) {

        queue<string>q;
        q.push("0000");
        int rotate=0;
        unordered_set<string>visited;
        for(auto i:deadends)
        visited.insert(i);

        if(visited.count("0000")!=0)
        return -1;
        visited.insert("0000");
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
              string top=q.front();
              if(top==target)
              return rotate;
              q.pop();
              child(visited,top,q);


            }
            rotate++;

        }
        return -1;
        
    }