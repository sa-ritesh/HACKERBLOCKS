#include<iostream>
using namespace std;
#include<cstring>
#include <bits/stdc++.h>
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
void makeCircular(node* &head)
{
    node*temp=head;
    node*s =nullptr;
    while(temp!=nullptr)
    {
        s=temp;
        temp=temp->next;
    }
    s->next=head;
}
void insertAtTail(node* &head, int data)
{
    if(head==nullptr)
    {
        head=new node(data);
        return;
    }

    node*tail=head;
    while(tail->next!=nullptr)
    {
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}
void printList(node*head)
{
    node*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int ans(node* head, int key)
{
    node* l=head;
    while(l->data!=key)
    {
        l=l->next;
    }
    l=l->next;
//cout<<l->data;
    while(l->data!=key)
    {
        if(l->data>key)
        {
            break;
        }
        l=l->next;
    }
//cout<<l->data;
    return l->data; ;
}
int main()
{

    node*head=nullptr;
    int n;
    cin>>n;
    int data;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>data;
        arr[i]=data;
        insertAtTail(head,data);
    }
    makeCircular(head);
    for(int i=0; i<n; i++)
    {
        int d=ans(head,arr[i]);
        if(d==arr[i])
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<d<<" ";
        }

    }
    return 0;
}
