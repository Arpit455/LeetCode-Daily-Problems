class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int positiveNumbers =nums.end()-upper_bound(nums.begin(),nums.end(),0);
        int negativeNumbers= lower_bound(nums.begin(),nums.end(),0) -nums.begin();

        return max(positiveNumbers,negativeNumbers);
        
    }
};