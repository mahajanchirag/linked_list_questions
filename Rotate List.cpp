class Solution {
public:
    

    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            len++;
        }
        
        k=k%len;
        k=len-k;
        temp->next=head;
    
        while(k>0)
        {
            temp=temp->next;
            k--;
        }
        
       head=temp->next;
        temp->next=NULL;
        return head;
    }
};
