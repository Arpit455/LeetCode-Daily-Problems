 long long largestPerimeter(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        long long perimeter =-1 ,sides_sum=nums[0]+nums[1];

        for(int i=2;i<nums.size();i++)
        {
            if(sides_sum>nums[i])
            {
                sides_sum+=nums[i];
                perimeter=sides_sum;
            }
            else
            sides_sum+=nums[i];
        }
        return perimeter; 
    }