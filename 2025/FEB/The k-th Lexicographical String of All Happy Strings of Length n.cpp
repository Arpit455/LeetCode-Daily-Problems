class Solution {
public:
    priority_queue<string>pq;
    void helper(int k,int index,char prev,int n,string&s,vector<char>&input)
    {
        if(index==n)
        {
          pq.push(s);
          if(pq.size()>k)
          pq.pop();
          return;
        }
        for(int i=0;i<3;i++)
        {
            if(prev!=input[i])
            {
                s+=input[i];
                helper(k,index+1,input[i],n,s,input);
                s.pop_back();
            }
        }
        return;
    }
    string getHappyString(int n, int k) {

        vector<char>input={'a','b','c'};
        string temp="";
        helper(k,0,'x',n,temp,input);
        if(pq.size()<k)
        return "";
        return pq.top();
        
    }
};