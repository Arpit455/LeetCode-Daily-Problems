class MyCalendar {
public: 
    vector<pair<int,int>>v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
    for(auto i:v)
    {
        if(!(i.first>=end || i.second<=start))
        return false;
    }
    v.push_back({start,end});
    return true;
        
    }
};