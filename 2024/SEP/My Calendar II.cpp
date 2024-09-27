class MyCalendarTwo {
public:

    vector<pair<int,int>>v; 
    vector<pair<int,int>>double_overlapped;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {

       for(auto i:double_overlapped)
        {
            if(!(i.first>=end || i.second<=start))
            return false;
        }
        for(auto i:v)
        {
            if(!(i.first>=end || i.second<=start))
            {
                double_overlapped.push_back({max(i.first,start),min(end,i.second)});
            }

        }
        
        v.push_back({start,end});
        return true;
        
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */