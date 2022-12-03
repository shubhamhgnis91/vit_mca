#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head=NULL,*tail=NULL;

void insert_beg(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->next=p->prev=NULL;
    
    if(head==NULL)
        head=tail=p;

    else
    {
        p->next=head;
        p->prev=NULL;
        head->prev=p;
        head=p;
    }
}

void insert_end(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->next=p->prev=NULL;

    if(tail==NULL)
        head=tail=p;
    else
    {
        p->prev=tail;
        tail->next=p;
        tail=p;
    }
}

void del_head()
{
    struct node *p;
    if(head==NULL)
        cout<<"\nLinked list is empty\n";

    else if(head->next=NULL)
    {
        cout<<"\nDeleting "<<head->data<<endl;
        head=NULL;
        free(head);
        
    }

    else
    {
        p=head;
        cout<<"\nDeleting "<<p->data<<endl;
        head=head->next;
        free(p);
        cout<<"\nNode deleted.\n";
    }
}

void del_tail()
{
    struct node *p;
    if(head==NULL)
        cout<<"\nLinked list is empty\n";
    
    p=head; 
    while(p->next!=NULL)
        p=p->next;
    
    if(head->next=NULL)
    {
        cout<<"\nDeleting "<<head->data<<endl;
        head=NULL;
        free(head);
        cout<<"\nNode deleted.\n";
    }
    else
    {
        cout<<"\nDeleting "<<p->data<<endl;
        p->prev->next=NULL;
        tail=p->prev;
        free(p);
        cout<<"\nNode deleted.\n";
    }

}


void display_forw()
{
    struct node *p=head;
    if(head==NULL)
    {
        cout<<"\nList is empty\n";
        return;
    }
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }
}

void display_back()
{
    struct node *p=tail;
    if(head==NULL)
    {
        cout<<"\nList is empty\n";
        return;
    }
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->prev;
    }
}


int main()
{
    int ch,x;
    cout<<"\n\n22MCA0379\nShubham Singh\n\n";
    do
    {
        cout<<"\n1. Insert at head\n2. Delete Head\n3. Insert at tail\n4. Delete Tail\n5. Display forward\n6. Display backward\n7. Exit\n\n Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\nEnter element to insert: ";
                    cin>>x;
                    insert_beg(x);
                    cout<<"\nInserted";
                    break;

            case 2: del_head();
                    break;
            
            case 3: cout<<"\nEnter element to insert: ";
                    cin>>x;
                    insert_end(x);
                    cout<<"\nInserted";
                    break;

            case 4: del_tail();
                    break;

            case 5: display_forw();
                    break;

            case 6: display_back();
                    break;

            case 7: cout<<"\n\nExiting...";
                    break;

            default:cout<<"\nWrong choice!\n";
            
        }

    }while(ch!=7);
    return 0;
}