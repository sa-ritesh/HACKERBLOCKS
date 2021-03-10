#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    long long int data;
    node*left;
    node*right;
    node(long long int d)
    {
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
void print(node* root)
{
    if(root==nullptr)
    {
        return;
    }

    cout<<root->data;

    print(root->left);
    print(root->right);
    return;
}
node* buildTree()
{
    queue<node*> q;
    long long int d;
    cin>>d;
    node*root=new node(d);
    q.push(root);
    while(!q.empty())
    {
        node*f=q.front();
        q.pop();
        cin>>d;
        if(d!=-1)
        {
            f->left=new node(d);
            q.push(f->left);
        }
        cin>>d;
        if(d!=-1)
        {
            f->right=new node(d);
            q.push(f->right);
        }
    }
    return root;
}
queue<node*> ans;
void bfs(node*root)
{
    queue<node*>q;

    q.push(root);
    ans.push(root);
    q.push(nullptr);
    ans.push(nullptr);
    while(!q.empty())
    {
        node*f=q.front();
        if(f==nullptr)
        {
            //cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(nullptr);
                ans.push(nullptr);
            }
        }
        else
        {
            //cout<<f->data<<" ";
            q.pop();
            if(f->left)
            {
                q.push(f->left);
                ans.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
                ans.push(f->right);
            }
        }
    }
}
int main()
{
    node*root=buildTree();
    bfs(root);
    //cout<<endl;
    while(!ans.empty())
    {
        node*temp=ans.front();
        ans.pop();
        if(ans.front()==nullptr)
        {
            if(temp)
            {
                cout<<temp->data<<" ";
            }
        }
    }
}

