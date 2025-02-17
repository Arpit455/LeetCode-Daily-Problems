class Solution {
public:
    void generateSequence(string &tiles , vector<bool>&used,unordered_set<string>&s,string &temp)
    {
        s.insert(temp);
        for(int i=0;i<used.size();i++)
        {
            if(!used[i])
            {
                temp+=tiles[i];
                used[i]=true;
                generateSequence(tiles,used,s,temp);
                temp.pop_back();
                used[i]=false;
            }
        }
        return;
    }
    int numTilePossibilities(string tiles) {
        int n=tiles.size();
        vector<bool>used(n,false);
        unordered_set<string>s;
        string temp="";
        generateSequence(tiles,used,s,temp);
        return s.size()-1;
        
    }
};