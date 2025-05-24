class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int>ans;

        int pos=0;

        for(auto i:words)
        {
            if(i.contains(x))
            ans.push_back(pos);
            pos++;
        }

        return ans;


        
    }
};