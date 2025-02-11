string removeOccurrences(string s, string part) {

        int n=part.size();
        string ans=s;

        while(true)
        {
            int i=0,j=0;
            string temp="";
            bool found=false;
            while(j<ans.size())
            {
                temp+=ans[j];

                if(j-i+1==n)
                {
                    if(temp==part)
                    {
                        
                        temp=ans.substr(0,i)+ans.substr(j+1,ans.size());
                        ans=temp;
                        found=true;
                        break;
                    }
                    else
                    {
                        temp.erase(temp.begin());
                        i++;
                    }
                }
                j++;
                
            }
            if(!found)
            return ans;
        }
        return ans;
        
    }