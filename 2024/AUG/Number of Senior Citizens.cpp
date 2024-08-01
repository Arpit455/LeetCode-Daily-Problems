int countSeniors(vector<string>& details) {

        int seniorcount=0;
        for(auto i:details)
        {
            int age= 10*(i[11]-'0')+i[12]-'0';
            if((age)>60)
            seniorcount++;
        }
        return seniorcount;
        
    }