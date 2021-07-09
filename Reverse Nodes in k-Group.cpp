class Solution {
public:
    
    ListNode* helper(ListNode* head, int k,int len)
    {
        if(k>len)
        {
            return head;
        }
        
        
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        int c=0;
        while(curr!=NULL && c<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c++;
        }
        
        if(next!=NULL)
        {
            head->next=helper(next,k,len-k);
        }
        
        return prev;
        
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        
        int len=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            len++;
            curr=curr->next;
        }
        
        return helper(head,k,len);
       
    }
};
