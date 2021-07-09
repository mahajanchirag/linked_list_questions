class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL)
        {
            return l2;
        }
        
        if(l2==NULL)
        {
            return l1;
        }
        
         ListNode* head=NULL;
         ListNode* tail=NULL;
        
        while(l1!=NULL && l2!=NULL)
        {
            int data;
            if(l1->val<l2->val)
            {
                data=l1->val;
                l1=l1->next;
            }
            
            else
            {
                data=l2->val;
                l2=l2->next;
            }
            
            
            if(head==NULL && tail==NULL)
            {
                ListNode* ans=new ListNode(data);
                head=ans;
                tail=ans;
            }
            
            else 
            {
                ListNode* ans=new ListNode(data);
                tail->next=ans;
                tail=tail->next;
            }
            
            
        }
        
        
        if(l1!=NULL)
        {
            tail->next=l1;
        }
        
        if(l2!=NULL)
        {
            tail->next=l2;
        }
        
        return head;
        
        
    }
};
