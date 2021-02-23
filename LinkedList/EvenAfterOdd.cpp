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
void insertAtTail(node*&head, int d)
{
    if(head==nullptr)
    {
        head=new node(d);
        return;
    }
    node*temp=head;
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
node*last(node*&head)
{
    node*temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    return temp;
}
int main()
{
    node* head1=nullptr;
    node* head2=nullptr;
    int n;
    cin>>n;
    while(n--)
    {
        int d;
        cin>>d;
        if(d%2==0)
        {
            insertAtTail(head1,d);
        }
        else
        {
            insertAtTail(head2,d);
        }
    }
    node* temp=last(head2);
    temp->next=head1;
    printList(head2);
}
