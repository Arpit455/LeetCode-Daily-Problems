int largestCombination(vector<int>& candidates) {

        vector<int>bits(32,0);
        for(int i=0;i<candidates.size();i++)
        {
            int temp=candidates[i];
            int j=31;
            while(temp)
            {
                if(temp&1)
                {
                    bits[j]+=1;
                }
                temp=temp>>1;
                j--;
            }

        }
        int maxNum=0;
        for(auto i:bits)
        maxNum=max(maxNum,i);
        return maxNum;
        
    }