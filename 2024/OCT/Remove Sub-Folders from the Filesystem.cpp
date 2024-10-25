vector<string> removeSubfolders(vector<string>& folder) {

        unordered_set<string>s;
        for(auto i:folder)
        s.insert(i);

        vector<string>ans;
        for(int i=0;i<folder.size();i++)
        {
            s.erase(folder[i]);
            string temp="";
            bool subfolder=false;
            for(int j=0;j<folder[i].size();j++)
            {
               if(folder[i][j]=='/')
               {
                if(s.find(temp)!=s.end())
                {
                    subfolder=true;
                    break;
                }

               }
               temp+=folder[i][j];
            }
            if(!subfolder)
            {
            ans.push_back(folder[i]);
            s.insert(folder[i]);
            }
        }
        return ans;
        
    }