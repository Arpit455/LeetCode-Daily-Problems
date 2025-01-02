vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        int prevSum=0;
        unordered_set<char>vowels;
        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');
        vector<int>prefixVowel(n+1);
        prefixVowel[0]=0;
        for(int i=0;i<n;i++)
        {
           bool isVowel=false;
           if(vowels.count(words[i][0])==1 && vowels.count(words[i][words[i].size()-1])==1)
           isVowel=true;
           prefixVowel[i+1]=prevSum+isVowel;
           prevSum=prefixVowel[i+1];

        }
        vector<int>ans;
        for(auto i:queries)
        {
            ans.push_back(prefixVowel[i[1]+1]-prefixVowel[i[0]]);
        }
        return ans;
        
    }