
vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>>key;
      for(auto i:strs)
      {
          string temp=i;
          sort(temp.begin(),temp.end());
          key[temp].push_back(i);
      }
      vector<vector<string>>ans;
      for(auto i:key)
      {
          ans.push_back(i.second);

      }
       return ans;
    }
	

