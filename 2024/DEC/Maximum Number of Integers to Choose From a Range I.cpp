int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>unique_numbers;
        for(auto i:banned){
            if(i<=n)
            unique_numbers.insert(i);
        }
       

        int count=0;
        int max_sum=0;
        for(int i=1;i<=n;i++)
        {
            if(unique_numbers.count(i)==0)
            {
                if(max_sum+i<=maxSum)
                {
                  max_sum+=i;
                  count++;
                }
                else
                return count;
                
            }
        }
        return count;
        
    }