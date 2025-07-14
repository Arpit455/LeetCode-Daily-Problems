class Solution {
public:
    int getDecimalValue(ListNode* head) {

        string num="";

        while(head)
        {
            num+=to_string(head->val);
            head=head->next;
        }

        int ans=0,p=0;

        for(int i=num.size()-1;i>=0;i--)
        {
            if(num[i]=='1')
            ans+=pow(2,p);

            p++;
        }

        return ans;


        
    }
};