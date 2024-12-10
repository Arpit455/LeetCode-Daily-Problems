unordered_map<string,int>m;
        for(int i=0;i<s.size();i++)
        {
            string temp="";
            temp+=s[i];
            m[temp]++;
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]==s[j-1]){
                temp+=s[j];
                m[temp]++;}
                else break;
            }
        }
        int lss=-1;
        for(auto i:m)
        {
            if(i.second>=3)
            {
                int temp_length=i.first.size();
                if(temp_length>lss)
                {
                    lss=temp_length;
                }
            }
        }
        return lss;        
    }