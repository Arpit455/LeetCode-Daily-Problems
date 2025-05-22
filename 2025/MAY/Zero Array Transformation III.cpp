class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {

        sort(queries.begin(),queries.end());

        priority_queue<int>candidate;
        priority_queue<int,vector<int>,greater<int>>taken;

        int queryConsumed=0,c=0;

        for(int i=0;i<nums.size();i++)
        {
           while(c<queries.size() && queries[c][0]==i)
           {
            candidate.push(queries[c][1]);
            c++;
           }
           
           while(taken.size()!=0 && i>taken.top())
           {
            taken.pop();
           }

           while(candidate.size()!=0 && candidate.top()>=i && taken.size()<nums[i])
           {
             taken.push(candidate.top());
             queryConsumed++;
             candidate.pop();
           }

           if(taken.size()<nums[i])
           return -1;

        }

        return queries.size()-queryConsumed;
        
    }
};