class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {

        sort(folder.begin(),folder.end());

        vector<string>ans;

         unordered_set<string>folders;

         for(auto i:folder)
         {
            string temp="/";
            bool exist=false;
            int j=1;
            while(j<i.size())
            {
                while(j<i.size() && i[j]!='/')
                {
                    temp+=i[j];
                    j++;
                }
                if(folders.count(temp)!=0)
                {
                    exist=true;
                    break;
                }
                temp+='/';
                j++;
            }
            if(!exist){
            folders.insert(i);
            ans.push_back(i);
            }
         }

         return ans;
        
    }
};