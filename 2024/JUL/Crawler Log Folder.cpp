int minOperations(vector<string>& logs) {

        int nesting=0;
        for(auto i:logs)
        {
            if(i=="./")
            continue;
            else if(i=="../"){
                if(nesting>0) --nesting;
            }
            else
            nesting++;
        }
        return nesting;
        
    }