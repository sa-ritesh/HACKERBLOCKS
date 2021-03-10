#include<iostream>
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
class ans
{
public:
    bool balance;
    int height;
};
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
ans isBalanced(node*root)
{
    ans p;
    if(root==nullptr)
    {
        p.height=0;
        p.balance=true;
        return p;
    }
    ans leftSubtree=isBalanced(root->left);
    ans rightSubtree=isBalanced(root->right);
    p.height=max(leftSubtree.height,rightSubtree.height)+1;
    if(abs(leftSubtree.height-rightSubtree.height)<=1 && leftSubtree.balance && rightSubtree.balance)
    {
        p.balance=true;
    }
    return p;
}
int main()
{
    node*root=buildTree();

    ans a=isBalanced(root);
    if(a.balance)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
