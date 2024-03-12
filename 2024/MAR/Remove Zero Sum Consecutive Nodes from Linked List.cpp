ListNode* removeZeroSumSublists(ListNode* head) {

        unordered_map<int,ListNode*>prefix_sum;
        ListNode *temp=head,*prev;
        int sum=0;
        ListNode *dummy=new ListNode(0);
        prefix_sum[0]=dummy;
        dummy->next=head;
        while(temp)
        {
            sum+=temp->val;
            if(prefix_sum.find(sum)!=prefix_sum.end())
            {  
                prev=prefix_sum[sum]->next;
                int tempsum=sum;
                while(prev!=temp)
                {
                    prefix_sum.erase(prev->val+tempsum);
                    tempsum+=prev->val;
                    prev=prev->next;
                }
                prefix_sum[sum]->next=temp->next;
            }
            else
            {
                prefix_sum[sum]=temp;
            }
            temp=temp->next;

        }
        return dummy->next;
        
    }