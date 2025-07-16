class Solution {
public:
    int maximumLength(vector<int>& nums) {

        int odd=0,even=0;

        for(auto i:nums)
        {
            if(i&1)
            odd++;
            else
            even++;
        }

        int count=1;
        bool start_odd;

        if(nums[0]&1)
        start_odd=true;
        else
        start_odd=false;

        for(int i=1;i<nums.size();i++)
        {
            if(start_odd && nums[i]%2==0)
            {
                count++;
                start_odd=false;
            }
            else if(!start_odd && nums[i]%2!=0)
            {
                count++;
                start_odd=true;
            }
        }

        return max(count,max(even,odd));
        
    }
};