class Solution {
public:
    int minimumIndex(vector<int>& nums) {

        int dominentnum=nums[0] ,dominentCount=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==dominentnum)
            dominentCount++;
            else
            {
                if(dominentCount==0)
                {
                    dominentCount++;
                    dominentnum=nums[i];
                }
                else
                dominentCount--;
            }
        }

        int totalDominentright=0;

        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]==dominentnum)
          totalDominentright++;



        }
         int totalDominentleft=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            int left_size=i+1;
            int right_size=nums.size()-i-1;
            if(nums[i]==dominentnum)
            {totalDominentleft++;
            totalDominentright--;}



            if(totalDominentright > right_size/2 && totalDominentleft> left_size/2)
            return i;

        }
        return -1;
        
    }
};