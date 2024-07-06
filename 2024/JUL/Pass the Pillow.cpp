 int passThePillow(int n, int time) {

        int rounds=time/(n-1);
        int hope=time%(n-1);
        if(rounds%2==0)
        {
            return hope+1;
        }
        else
        {
            return n-hope;
        }
        return 0;
        
    }