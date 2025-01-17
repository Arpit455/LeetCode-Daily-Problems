bool doesValidArrayExist(vector<int>& derived) {

        int xors=0;
        for(auto i:derived)
        xors^=i;

        return xors==0;
        
    }