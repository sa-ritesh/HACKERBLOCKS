#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=nullptr;
    }
};
void insertAtTail(node* &head, int d)
{
    if(head==nullptr)
    {
        head=new node(d);
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=new node(d);
}
void printList(node* head)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
node* Merge(node* a, node*b)
{
    if(a==nullptr)
    {
        return b;
    }
    if(b==nullptr)
    {
        return a;
    }
    node* c;
    if(a->data < b->data)
    {
        c=a;
        c->next=Merge(a->next,b);
    }
    else
    {
        c=b;
        c->next=Merge(a,b->next);
    }
    return c;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        node* head1=nullptr;
        int n;
        cin>>n;
        while(n--)
        {
            int c;
            cin>>c;
            insertAtTail(head1,c);
        }
        node* head2=nullptr;
        int m;
        cin>>m;
        while(m--)
        {
            int d;
            cin>>d;
            insertAtTail(head2,d);
        }
        node*head=Merge(head1,head2);
        printList(head);
        cout<<endl;
    }
}
