ListNode* mergeNodes(ListNode* head) {

        ListNode * prev=head,*temp=head->next;
        int sum=0;
        while(temp)
        {
            if(temp->val==0)
            {
                prev->val=sum;
                prev->next=temp->next;
                sum=0;
                prev=temp->next;
            }
            else 
            sum+=temp->val;
            temp=temp->next;
        }
        return head;
        
    }