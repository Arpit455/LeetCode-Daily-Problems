 ListNode* removeNthFromEnd(ListNode* head, int n) {

        vector<ListNode*> nodes;
        ListNode *temp=head;
        while(temp)
        {
            nodes.push_back(temp);
            temp=temp->next;
        }
        int size=nodes.size();
        if(n==size)
        {
            head=head->next;
            return head;
        }
        else
        {
            nodes[size-n-1]->next=nodes[size-n]->next;
            return head;
        }
        
    }