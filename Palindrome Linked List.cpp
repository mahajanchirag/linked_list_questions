class Solution {
public:
    
    ListNode* reverse(ListNode* node)
    {
        ListNode *curr=node,*prev=NULL,*next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL)
        {
            return false;
        }
        
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
            {
                return false;
            }
            
            head=head->next;
            slow=slow->next;
        }
        
        return true;
    }
};
