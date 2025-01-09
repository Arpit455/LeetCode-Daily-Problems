struct Node{
    Node *a[26];
    int words=0;

};
class Trie{
    private : Node * root;
    public:
    Trie()
    {
        root=new Node();
    }
    void add(string s)
    {
        Node *temp=root;
        for(auto i:s)
        {
            if(temp->a[i-'a']==NULL)
            {
                Node *node=new Node();
                temp->a[i-'a']=node;
                temp->a[i-'a']->words++;
                temp=node;
            }
            else
            {
                temp->a[i-'a']->words++;
                temp=temp->a[i-'a'];
            }
        }
    }
    int count_prefix(string s)
    {
        Node * temp=root;
        for(auto i:s)
        {
            if(temp->a[i-'a']==NULL)
            return 0;
            temp=temp->a[i-'a'];
        }
        return temp->words;
    }

};
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        Trie * node=new Trie();
        for(auto i:words)
        node->add(i);
        return node->count_prefix(pref);
        
    }
};