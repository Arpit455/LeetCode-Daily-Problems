int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int count[2];
        for(auto i:students)
        count[i]++;
        int n=students.size();
        for(auto i:sandwiches)
        {
            if(count[i]!=0)
            {
                count[i]--;
                n--;
            }
            else
            {
                return n;
            }

        }
        return 0;
        
    }