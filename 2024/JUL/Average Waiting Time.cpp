double averageWaitingTime(vector<vector<int>>& customers) {

        long long int waittime=0,cheftime=1;
        for(int i=0;i<customers.size();i++)
        {
            if(customers[i][0]>cheftime)
            {
            cheftime=customers[i][0];
            }
            cheftime+=customers[i][1];
            waittime+=cheftime-customers[i][0];

        }
        return (double)waittime/customers.size();


        
    }