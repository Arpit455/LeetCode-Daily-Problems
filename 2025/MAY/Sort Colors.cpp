class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero=0,two=nums.size()-1;

        int i=0;
        while(i<=two)
        {
            if(nums[i]==0)
            {
                swap(nums[zero],nums[i]);
                nums[zero]=0;
                zero++;
                i++;
            }

            else if(nums[i]==2){
                nums[i]=nums[two];
                nums[two]=2;
                two--;
            }
            else
            {
                i++;
            }
        }

        return ;
        
    }
};