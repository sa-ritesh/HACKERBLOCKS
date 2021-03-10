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
node* insertInBST(node*root,int d)
{
    if(root==nullptr)
    {
        return new node(d);
    }
    if(d<=root->data)
    {
        root->left=insertInBST(root->left,d);
    }
    else
    {
        root->right=insertInBST(root->right,d);
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
node* deleteInBST(node*root, int d)
{
    if(root==nullptr)
    {
        return nullptr;
    }
    if(d<root->data)
    {
        root->left=deleteInBST(root->left,d);
    }
    else if(d>root->data)
    {
        root->right=deleteInBST(root->right,d);
    }
    else
    {
        //node found
        if(root->left==nullptr && root->right==nullptr)
        {
            delete root;
            return nullptr;
        }
        else if(root->left!=nullptr && root->right==nullptr)
        {
            node*temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left==nullptr && root->right!=nullptr)
        {
            node*temp=root->right;
            delete root;
            return temp;
        }
        else
        {
            node*temp=root->right;
            while(temp->left)
            {
                temp=temp->left;
            }
            root->data=temp->data;
            root->right=deleteInBST(root->right,root->data);
            return root;
        }

    }
    return root;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        node*root=nullptr;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            root=insertInBST(root,a);
        }
        int m;
        cin>>m;
        while(m--)
        {
            int a;
            cin>>a;
            root=deleteInBST(root,a);
        }
        print(root);
        cout<<endl;
    }
}
