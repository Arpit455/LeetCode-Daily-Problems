vector<string> commonChars(vector<string>& words) {

        vector<unordered_map<char,int>>v(words.size());

        for(int i=1;i<words.size();i++)
        {
            unordered_map<char,int>temp;
            for(int j=0;j<words[i].size();j++)
            {
                temp[words[i][j]]++;
            }
            v[i]=temp;
        }
        vector<string>ans;
        for(int i=0;i<words[0].size();i++)
        {
            bool present=true;
            for(int j=1;j<words.size();j++)
            {
               if(v[j].find(words[0][i])!=v[i].end())
               {
                v[j][words[0][i]]--;
                if(v[j][words[0][i]]==0)
                v[j].erase(words[0][i]);
               }
               else
               {
                present=false;
                break;
               }
            }
            if(present)
            {
                string temp;
                temp+=words[0][i];
                ans.push_back(temp);
            }
            
        }
        return ans;

        
    }