class Solution {
public:
    bool helper(int index, int n, string& s, string& ans,
                unordered_set<string>& st) {
        if (index == n) {
            if (st.count(s) == 0) {
                ans = s;
                return true;
            }
            return false;
        }
        s+='0';
        if(helper(index+1,n,s,ans,st))
        return true;
        s.pop_back();
        s+='1';
        if(helper(index+1,n,s,ans,st))
        return true;
        s.pop_back();

        return false;

    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> st;
        for(auto i:nums)
        st.insert(i);
        string ans;

        string possible="";

        helper(0,nums[0].size(),possible,ans,st);

        return ans;
    }
};