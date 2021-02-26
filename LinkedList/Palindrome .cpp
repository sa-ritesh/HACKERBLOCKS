#include<iostream>
#include<map>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node*prev=nullptr;
    node(int d)
    {
        data=d;
        next=nullptr;
        prev=nullptr;
    }
};
node*last(node* head)
{
    node*temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    return temp;
}
void insertAtTail(node*&head, int d)
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
    node*n=new node(d);
    temp->next=n;
    n->prev=temp;
    return;
}
void print(node* head)
{
    node*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
bool isPalindrome(node*head, node*last)
{
    while(head!=last)
    {
        if(head->data!=last->data)
        {
            return false;
        }
        head=head->next;
        last=last->prev;
    }
    return true;
}
int main()
{
    node*head=nullptr;
    int n;
    cin>>n;
    while(n--)
    {
        int d;
        cin>>d;
        insertAtTail(head,d);
    }
    node*l=last(head);
    int ans=isPalindrome(head,l);
    if(ans==0)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
}

