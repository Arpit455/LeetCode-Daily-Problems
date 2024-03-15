 vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>prefixmul(nums.size());
        prefixmul[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
          prefixmul[i]=nums[i]*prefixmul[i+1];
        }
     int mul=1;
     vector<int>ans;
     for(int i=0;i<nums.size()-1;i++)
     {
        int y=mul*prefixmul[i+1];
        ans.push_back(y);
        mul*=nums[i];

     }
     ans.push_back(mul);
     return ans;
        
    }