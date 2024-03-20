ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode *temp=list2,*end2,*temp1;
        while(temp->next)
        {
            temp=temp->next;
        }
        end2=temp;
        temp=list1;
        for(int i=0;i<=b;i++)
        {
            if(i==a-1)
            {
                temp1=temp;
                temp=temp->next;
                temp1->next=list2;

            }
            else if(i==b)
            {
                 end2->next=temp->next;
            }
            else
            {
                temp=temp->next;
            }

        }
        return list1;

        
    }