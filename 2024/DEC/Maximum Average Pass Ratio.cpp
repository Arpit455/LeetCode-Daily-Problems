double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>>pq;

        for(int i=0;i<classes.size();i++)
        {
            double curr_pr=(double)classes[i][0]/classes[i][1];
            double incremented_pr=(double)(classes[i][0]+1)/(classes[i][1]+1);
            pq.push({incremented_pr-curr_pr,i});
        }
        while(extraStudents)
        {
            auto temp=pq.top();
            pq.pop();
            int i=temp.second;
            classes[i][0]+=1;
            classes[i][1]+=1;
            double curr_pr=(double)classes[i][0]/classes[i][1];
            double incremented_pr=(double)(classes[i][0]+1)/(classes[i][1]+1);
            pq.push({incremented_pr-curr_pr,i});
            extraStudents--;

        }
        double sum=0;
        for(int i=0;i<classes.size();i++)
        {
            sum+=(double)classes[i][0]/classes[i][1];
        }
        return sum/classes.size();
        
    }