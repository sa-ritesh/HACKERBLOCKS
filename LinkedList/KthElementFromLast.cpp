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
node* ans(node*&head, int k)
{
    node*fast=head;
    node*slow=head;
    int i=1;
    while(i<=k)
    {
        fast=fast->next;
        i++;
    }
    while(fast!=nullptr)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
int main()
{
    node* head=nullptr;
    int c;
    cin>>c;
    while(c!=-1)
    {
        insertAtTail(head,c);
        cin>>c;
    }
    int k;
    cin>>k;
    node*l=ans(head,k);
    cout<<l->data;
}
