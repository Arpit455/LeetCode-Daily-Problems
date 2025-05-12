class Solution {
public:
    void helper(int pos , int temp, vector<int>&numbers,vector<bool>&used,vector<int>&digits)
    {
        if(pos==4)
        {
            numbers.push_back(temp);
            return;
        }
        for(int i=0;i<digits.size();i++)
        {
            if(!used[i] && !(pos==1 && digits[i]==0))
            {
               used[i]=true;
               helper(pos+1,temp*10+digits[i],numbers,used,digits);
               used[i]=false;
            }
        }
        return;
    }
    vector<int> findEvenNumbers(vector<int>& digits) {

        vector<int>numbers;
        int n=digits.size();
        vector<bool> used(n,false);

        helper(1,0,numbers,used,digits);

        vector<int>ans;
        set<int>s;

        for(auto i:numbers)
        {
            if(!(i&1))
            s.insert(i);
        }
        for(auto i:s)
        ans.push_back(i);


        return ans;
        
    }
};