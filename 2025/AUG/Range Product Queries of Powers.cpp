class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {

        vector<int>powers,ans;
        int mod=1e9+7;
        while(n!=0)
        {
           int x=log2(n);
           int num=pow(2,x);
           powers.push_back(num);
           n=n-num; 
        }

        reverse(powers.begin(),powers.end());


        for(auto i:queries)
        {
            long long temp=1;
            for(int j=i[0];j<=i[1];j++)
            {
            temp*=powers[j];
            temp%=mod;
            }
            ans.push_back(temp);
        }

        return ans;
        
    }
};