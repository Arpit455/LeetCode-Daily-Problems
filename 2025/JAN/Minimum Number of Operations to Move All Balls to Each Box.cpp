vector<int> minOperations(string boxes) {
        int n=boxes.size();
        int prev=0;
        int ones=0;
        vector<int>postfix(n);
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
           postfix[i]=ones+prev;
           if(boxes[i]=='1')
           ones++;
           prev=postfix[i];
        }
        
        prev=0,ones=0;
        for(int i=0;i<boxes.size();i++)
        {
            ans.push_back(prev+ones+postfix[i]);
            prev=ones+prev;
            if(boxes[i]=='1')
            ones++;
            
        }
        return ans;
        
    }