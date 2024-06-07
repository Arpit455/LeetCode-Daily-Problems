string replaceWords(vector<string>& dictionary, string sentence) {


        unordered_set<string>s;
        for(auto i:dictionary)
        s.insert(i);
        string ans="",temp="";
        bool possible=false;
        for(int i=0;i<sentence.size();i++)
        {
            temp+=sentence[i];
           
           if(s.find(temp)!=s.end() && possible==false)
           {
            possible=true;
           ans+=temp;
           }

           if(isspace(sentence[i]))
           {
            if(!possible)
            {
            ans+=temp;
            temp="";
            }
            else{
                possible=false;
                ans+=" ";
                temp="";
            }
           }

        }
        if(!possible)
        ans+=temp;
        return ans;
        
    }