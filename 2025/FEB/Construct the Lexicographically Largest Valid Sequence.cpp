class Solution {
public:
    bool helper(vector<int>&ans,int index,int num,vector<bool>&used)
    {
        if(index>=ans.size())
        return true;
        if(ans[index]!=0)
        return helper(ans,index+1,num,used);

        for(int i=num;i>=1;i--)
        {
            int nextindex= (i==1) ? index : index+i;
            if(used[i] || (nextindex>=ans.size()) || (i>1 &&  ans[nextindex]!=0))
            continue;
            used[i]=true;
            ans[index]=i;
            ans[nextindex]=i;
            if(helper(ans,index+1,num,used))
            return true;
            used[i]=false;
            ans[index]=0;
            ans[nextindex]=0;

        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {

        vector<int>ans(2*n-1,0);
        vector<bool>used(n+1,false);

        helper(ans,0,n,used);
        return ans;
        
    }
};