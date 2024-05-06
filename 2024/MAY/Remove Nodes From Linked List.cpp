ListNode* removeNodes(ListNode* head) {

        vector<int>v;
        ListNode *temp=head, *temp1=NULL,*prev=NULL;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int maxi=v[v.size()-1];
        for(int i=v.size()-2;i>=0;i--)
        {
            if(v[i]<maxi)
            v[i]=maxi;
            else
            maxi=v[i];
        }
        temp=head;
        for(int i=0;i<v.size()-1;i++)
        {
            if(temp->val>=v[i+1])
            {
              if(temp1==NULL)
              {
                temp1=new ListNode(temp->val);
                prev=temp1;
              }
              else
              {
                prev->next=new ListNode(temp->val);
                prev=prev->next;
              }
            }
            temp=temp->next;

        }
        if(temp1==NULL)
              {
                temp1=new ListNode(temp->val);
                prev=temp1;
              }
              else
              {
                prev->next=new ListNode(temp->val);
                prev=prev->next;
              }
        return temp1;
        
    }