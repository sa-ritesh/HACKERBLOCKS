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
node*middle(node*&head,int k)
{
    node*temp=head;
    int jump=1;
    while(jump<k)
    {
        temp=temp->next;
        jump+=1;

    }
    //cout<<temp->data;
    return temp;
}
node*last(node*&head)
{
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    // cout<<temp->data;
    return temp;
}
int main()
{
    int n;
    cin>>n;
    node* head=nullptr;
    int p=n;
    while(n--)
    {
        int d;
        cin>>d;
        insertAtTail(head,d);
    }
    int target;
    cin>>target;
    target=target%p;
    node* m=middle(head,p-target);
    node* l=last(head);
    l->next=head;
    head=m->next;
    m->next=nullptr;
    printList(head);



}
