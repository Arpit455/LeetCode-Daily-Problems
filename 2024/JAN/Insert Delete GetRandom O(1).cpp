class RandomizedSet {
public:
unordered_map<int,int>m;
vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)==m.end())
        {
           
            v.push_back(val);
             m[val]=v.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(m.find(val)!=m.end())
        {
            v[m[val]]=v[v.size()-1];
            m[v[v.size()-1]]=m[val];
            v.pop_back();
             m.erase(val);
            return true;
        }
        return false;
        
    }
    
    int getRandom() {
     // cant use advance method as it it will take O(N) time;

        // int random=rand();
        // random=random%s.size();
        // auto it=s.begin();
        // advance(it,random);
        // return *it;

        return v[rand()%v.size()];
        
    }
};