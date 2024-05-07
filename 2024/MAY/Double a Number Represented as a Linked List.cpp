ListNode* doubleIt(ListNode* head) {

        ListNode *temp = head, *prev = head;
        int carry = 0;
        while (temp) {
            int x = temp->val * 2;
            temp->val = x % 10;
            carry = x / 10;
            if (temp == head && carry != 0) {
                ListNode* x = new ListNode(carry);
                head = x;
                x->next = temp;
                prev = temp;
            } else {

                prev->val += carry;
                prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }