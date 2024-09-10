private:
    int gcd(int a,int b)
    {
        if(a%b==0)
        return b;
        return gcd(b%a,a);
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode*temp=head,*node;
        if(!temp->next)
        return temp;

        while(temp->next)
        {
            int x=gcd(temp->val,temp->next->val);
            node=new ListNode(x);
            node->next=temp->next;
            temp->next=node;
            temp=temp->next->next;
            
        }
        return head;
        
    }