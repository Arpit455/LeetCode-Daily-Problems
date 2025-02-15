class Solution {
public:
    bool equal(int i,string nums,int target)
    {
        if(i>=nums.size())
        return target==0;
        if(target<0)
        return false;
         
        
        for(int j=i;j<nums.size();j++)
         if(equal(j+1,nums,target-stoi(nums.substr(i,j-i+1))))
         return true;

        return false;

    }
    int punishmentNumber(int n) {
        int ans=0;

        for(int i=1;i<=n;i++)
        {
            if(equal(0,to_string(i*i),i))
            ans+=i*i;
        }
        return ans;
        
    }
};