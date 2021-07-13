class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode *slow=head,*fast=head,*start=head;
        
        while(fast->next && fast->next->next)
        {
            
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                while(start!=slow)
                {
                    slow=slow->next;
                    start=start->next;
                }
                
                return slow;
            }
        }
        
        
            return NULL;
        
        
        
    }
};
