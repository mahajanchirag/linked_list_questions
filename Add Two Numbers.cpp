class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
        {
            return l2;
        }
        
        if(l2==NULL)
        {
            return l1;
        }
        
        int c=0;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        while(l1!=NULL && l2!=NULL)
        {
            int data=l1->val+l2->val;
            
            if(data+c<10)
            {
                data=data+c;
                c=0;
            }
            
            else if(data+c>=10)
            {
                data=data+c-10;
                c=1;
            }
            
            if(head==NULL && tail==NULL)
            {
                ListNode* temp=new ListNode(data);
                head=temp;
                tail=temp;
            }
            
            else
            {
                ListNode* temp=new  ListNode(data);
                tail->next=temp;
                tail=tail->next;
            }
            
            l1=l1->next;
            l2=l2->next;
            
        }
        
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {
                int data=l1->val;
                 if(data+c<10)
                {
                     data=data+c;
                    c=0;
                }
            
                else if(data+c>=10)
                {
                     data=data+c-10;
                        c=1;
                }
                
                ListNode* temp=new  ListNode(data);
                tail->next=temp;
                tail=tail->next;
                l1=l1->next;
            }
        }
        
        if(l2!=NULL)
        {
            while(l2!=NULL)
            {
                int data=l2->val;
                 if(data+c<10)
                {
                     data=data+c;
                    c=0;
                }
            
                else if(data+c>=10)
                {
                     data=data+c-10;
                        c=1;
                }
                
                ListNode* temp=new  ListNode(data);
                tail->next=temp;
                tail=tail->next;
                l2=l2->next;
            }
        }
        
        if(c==1)
        {
            ListNode* temp=new  ListNode(1);
                tail->next=temp;
                tail=tail->next;
                
        }
        
        tail->next=NULL;
        
        return head;
        
        
        
    }
};
