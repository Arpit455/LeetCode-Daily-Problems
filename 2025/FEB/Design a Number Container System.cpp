class NumberContainers {
public:
    unordered_map<int,int> m1;
    unordered_map<int,set<int>>m2;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {

        if(m1[index]!=0)
         m2[m1[index]].erase(index);

        m1[index]=number;
        m2[number].insert(index);
        
    }
    
    int find(int number) {

        if(m2[number].size()==0)
        return -1;
        else
        return *m2[number].begin();
        
    }
};