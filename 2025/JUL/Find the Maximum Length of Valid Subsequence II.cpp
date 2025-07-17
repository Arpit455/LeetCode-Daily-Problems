You have a nested dictionary structure representing a company’s organizational hierarchy. Each key is a department name, and the value can either be an integer representing the number of employees or another dictionary representing sub-departments.

Example:

org_structure = { ‘Sales’: 150, ‘Engineering’: { ‘Software’: { ‘Backend’: 30, ‘Frontend’: 20 }, ‘Hardware’: 50 }, ‘HR’: 40 } Task:

Write a recursive function that traverses the dictionary and calculates the total number of employees in the organization. Modify the function to also return a dictionary that contains the number of employees in each department, including aggregated counts for departments with sub-departments.class Solution {
public:
   
    int maximumLength(vector<int>& nums, int k) {
         int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(k, 1));

        int res = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int mod = (nums[j] + nums[i]) % k;
                dp[i][mod] = max(dp[i][mod], dp[j][mod] + 1);
                res = max(res, dp[i][mod]);
            }
        }

        return res;
    }
};
