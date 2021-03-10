#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class node
{
public:
    string data;
    node*left;
    node*right;
    node(string d)
    {
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
queue<node*>q;
queue<node*>ans;

node* buildTree()
{
    string s;
    cin>>s;
    if(s=="false")
    {
        return nullptr;
    }
    else if(s=="true")
    {
        cin>>s;
    }
    node*root=new node(s);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void print(node* root)
{
    if(root==nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
    return;
}
void bfs(node*root)
{
    q.push(root);
    ans.push(root);
    q.push(nullptr);
    ans.push(nullptr);
    while(!q.empty())
    {
        node*f=q.front();
        if(f==nullptr)
        {
            q.pop();
            if(!q.empty())
            {
                q.push(nullptr);
                ans.push(nullptr);
            }
        }
        else
        {
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
    node* root=buildTree();
    bfs(root);
    int i=0;
    while(!ans.empty())
    {
        if(i%2!=0)
        {
            vector<string> v;
            while(ans.front()!=nullptr)
            {
                v.push_back(ans.front()->data);
                ans.pop();
            }
            reverse(v.begin(),v.end());
            for(auto i:v)
            {
                cout<<i<<" ";
            }
            v.clear();
            ans.pop();
        }
        else
        {
            while(ans.front()!=nullptr)
            {
                cout<<ans.front()->data<<" ";
                ans.pop();
            }
            ans.pop();
        }
        i++;
    }
}
