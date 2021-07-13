Node *merge(Node *h1,Node *h2)
{
    Node *head=NULL,*tail=NULL;
    
    while(h1!=NULL && h2!=NULL)
    {
        int val;
        if(h1->data<h2->data)
        {
            val=h1->data;
            h1=h1->bottom;
        }
        
        else
        {
            val=h2->data;
            h2=h2->bottom;
        }
        
        
        if(head==NULL)
        {
            Node* node=new Node(val);
            head=node;
            tail=node;
        }
        
        else
        {
            Node* node=new Node(val);
            tail->bottom=node;
            tail=tail->bottom;
        }

   
    }
    
    if(h1!=NULL)
    {
        tail->bottom=h1;
        
    }
    
    if(h2!=NULL)
    {
        tail->bottom=h2;
    }
    
    head->next=NULL;
    return head;
    
}
    
    
    
    
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL)
   {
       return root;
   }
   
   root->next=flatten(root->next);
   
   root=merge(root,root->next);
   return root;
   
   
}
