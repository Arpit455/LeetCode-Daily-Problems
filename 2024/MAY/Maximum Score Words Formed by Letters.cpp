class Solution {
public:
    int helper(int i,vector<string>& words,unordered_map<char,int>&m,vector<int>& score)
    {
        if(i<0)
        return 0;
        int take=0,nottake,tempscore=0;
        bool possible=true;
        for(int j=0;j<words[i].size();j++)
        {
          if(m.find(words[i][j])==m.end() || m[words[i][j]]==0)
          {
            possible=false;
            for(int k=0;k<j;k++)
            {
                m[words[i][k]]++;
            }
            break;
          }
          else
          {
            m[words[i][j]]--;
            tempscore+=score[words[i][j]-'a'];
          }
        }
        if(possible){
        take=tempscore+helper(i-1,words,m,score);
        for(int j=0;j<words[i].size();j++)
        {
            m[words[i][j]]++;
        }
        }
        nottake=helper(i-1,words,m,score);
        return max(take,nottake);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {

        unordered_map<char,int>m;
        int n=words.size();
        for(auto i:letters)
        m[i]++;

        return helper(n-1,words,m,score);
        
    }
};