#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
node*buildTree()
{
    int d,c;
    cin>>d;
    node*root=new node(d);
    cin>>c;
    if(c==0)
    {
        root->left=root->right=nullptr;
    }
    else if(c==1)
    {
        root->left=buildTree();
        root->right=nullptr;
    }
    else
    {
        root->left=buildTree();
        root->right=buildTree();
    }
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
int sumAtLevelK(node*root,int k)
{
    static int ans=0;
    if(root==nullptr || k<0)
    {
        return 0;
    }
    if(k==0)
    {
        ans+=root->data;
    }
    sumAtLevelK(root->left,k-1);
    sumAtLevelK(root->right,k-1);
    return ans;
}

int main()
{
    node*root=buildTree();
    int level;
    cin>>level;
    cout<<sumAtLevelK(root,level);
}
