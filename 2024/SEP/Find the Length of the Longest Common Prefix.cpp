int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        int lcp=0;

        unordered_set<string>s;

        for(int i=0;i<arr1.size();i++)
        {
            string temp="",temp2=to_string(arr1[i]);
            cout<<temp2;

            for(int j=0;j<temp2.size();j++)
            {
               temp+=temp2[j];
               s.insert(temp);
            }
        }

        for(int i=0;i<arr2.size();i++)
        {
            string temp="",temp2=to_string(arr2[i]);
            for(int j=0;j<temp2.size();j++)
            {
               temp+=temp2[j];
               if(s.count(temp)!=0)
               {
                int lns=temp.length();
                lcp=max(lcp,lns);
               }
            }
        }
         return lcp;
        
    }