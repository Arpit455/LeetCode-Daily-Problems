class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map<int,int>frequency;

        for(auto i:nums)
        frequency[i]++;

        for(auto i:frequency)
        {
            if(i.second%2!=0)
            return false;
        }
        return true;
        
    }
};