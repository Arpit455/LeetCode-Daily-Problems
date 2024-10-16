string longestDiverseString(int a, int b, int c) {

        priority_queue<pair<int,char>>q;
        q.push({a,'a'});
        q.push({b,'b'});
        q.push({c,'c'});
        string happy="";

        while(q.size())
        {
             if(q.top().first==0) break;
             
             int occurence=q.top().first;
             char letter=q.top().second;
             q.pop();
             if(happy.size()>=2 && happy[happy.size()-1]==happy[happy.size()-2] && happy[happy.size()-1]==letter )
             {
                int occurence1=q.top().first;
             char letter1=q.top().second;
             q.pop();
             if(occurence1==0) break;
             happy+=letter1;
             q.push({occurence1-1,letter1});
             }
             else
             {
                happy+=letter;
                occurence--;
             }
             q.push({occurence,letter});
        }
        return happy;
        
    }