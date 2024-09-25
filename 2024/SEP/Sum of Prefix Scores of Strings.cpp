class Trie{
public:
    int count;
    Trie* nodes[26];

    Trie()
    {
        this->count=0;
        for(int i=0;i<26;i++)
        {
            this->nodes[i]=nullptr;
        }
    }
};
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie *temp=new Trie();



        for(auto i:words)
        {
             Trie *t=temp;
            for(auto j:i)
            {
                if(t->nodes[j-'a']!=NULL)
                {
                    t->nodes[j-'a']->count++;
                }
                else
                {
                    t->nodes[j-'a']=new Trie();
                    t->nodes[j-'a']->count++;

                }
                t=t->nodes[j-'a'];
                

            }
        }
        vector<int>ans;
        for(auto i:words)
        {
             Trie *t=temp;
            int count=0;
            for(auto j:i)
            {
                count+=t->nodes[j-'a']->count;
                t=t->nodes[j-'a'];
            }
            ans.push_back(count);

        }
        return ans;
        
    }