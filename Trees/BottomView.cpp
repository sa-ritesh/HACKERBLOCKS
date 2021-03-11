#include<iostream>
#include<queue>
#include <map>
using namespace std;
map<int,pair<int,int>> m;
class node
{
public:
    int data;
    int level;
    int height;
    node*left;
    node*right;
    node(int d,int k, int h)
    {
        data=d;
        level=k;
        height=h;
        left=nullptr;
        right=nullptr;
    }
};
node* buildTree()
{
    queue<node*> q;
    int d;
    cin>>d;
    node*root=new node(d,0,0);
    q.push(root);
    while(!q.empty())
    {
        node*f=q.front();
        q.pop();
        cin>>d;
        if(d!=-1)
        {
            f->left=new node(d,f->level-1,f->height+1);
            q.push(f->left);
        }
        cin>>d;
        if(d!=-1)
        {
            f->right=new node(d,f->level+1,f->height+1);
            q.push(f->right);
        }
    }
    return root;
}
void print(node* root)
{
    if(root==nullptr)
    {
        return;
    }

    print(root->left);
    //cout<<root->level<<" "<<root->height<<" "<<root->data<<endl;
    if(!m[root->level].second)
    {
        //cout<<"CASE-1"<<endl;
        m[root->level].first=root->height;
        m[root->level].second=root->data;
        //cout<<root->level<<" "<<m[root->level].first<<" "<<m[root->level].second<<endl;
    }
    else
    {
        if(m[root->level].first<=root->height)
        {
            //cout<<"CASE-2"<<endl;
            m[root->level].first=root->height;
            m[root->level].second=root->data;
            //cout<<root->level<<" "<<m[root->level].first<<" "<<m[root->level].second<<endl;
        }
    }

    print(root->right);
    return;
}
int main()
{
    node*root=buildTree();
    print(root);
//cout<<endl<<endl;
    for(auto it:m)
    {
        cout<<it.second.second<<" ";
    }
}

