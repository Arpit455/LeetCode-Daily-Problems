ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int>s;
        for(auto i:nums)
        s.insert(i);

        ListNode *node=new ListNode(-1);
        node->next=head;

        ListNode *prev=node,*temp=head;

        while(temp)
        {
            if(s.find(temp->val)!=s.end())
            {
                prev->next=temp->next;
            }
            else
            {
                prev=temp;
            }
            temp=temp->next;
        }
        return node->next;
        
    }