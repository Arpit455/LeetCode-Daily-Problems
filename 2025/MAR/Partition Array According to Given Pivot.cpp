class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int>plesser,pgreater;
        int num_of_pivot_elements=0;

        for(auto i:nums)
        {
            if(i<pivot)
            plesser.push_back(i);
            else if(i>pivot)
            pgreater.push_back(i);
            else
            num_of_pivot_elements++;

        }
        int i=0;
        for(auto j:plesser)
        {
            nums[i]=j;
            i++;
        }
        while(num_of_pivot_elements--)
        {
            nums[i]=pivot;
            i++;
        }
        for(auto j:pgreater)
        {
            nums[i]=j;
            i++;
        }
        return nums;
        
    }
};