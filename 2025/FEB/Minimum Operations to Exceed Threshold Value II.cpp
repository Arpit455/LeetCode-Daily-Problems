class Solution {
public:
    using ll = long long;
    int minOperations(vector<int>& nums, int k) {
        
        priority_queue<ll,vector<ll>,greater<ll>>pq(nums.begin(),nums.end());

        int operations=0;
        while(pq.size()>1)
        {
            if(pq.top()>=k)
            break;
            ll num1=pq.top();
            pq.pop();
            ll num2=pq.top();
            pq.pop();
            pq.push(num1*2+num2);
            operations++;
        }

        return operations;
    }
};