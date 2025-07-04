class Solution {
public:
    char helper(vector<int>& operations, int index, long long k)
    {
        if(index < 0)
            return 'a';

        long long prevLength = 1;
        if(index >= 63)
            prevLength = LLONG_MAX;
        else
            prevLength = 1LL << index;

        if(k <= prevLength)
        {
            return helper(operations, index - 1, k);
        }
        else
        {
            char temp = helper(operations, index - 1, k - prevLength);
            if(operations[index] == 0)
                return temp;
            else
                return (temp == 'z') ? 'a' : temp + 1;
        }
    }

    char kthCharacter(long long k, vector<int>& operations) {
        int n = operations.size();
        return helper(operations, n - 1, k);
    }
};
