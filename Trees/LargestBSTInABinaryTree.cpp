#include<iostream>
#include<bits/stdc++.h>
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
class nodeHelper
{
public:
    bool isBST;
    int size;
    int maximum;
    int minimum;
    nodeHelper()
    {
        isBST=true;
        size=0;
        maximum=INT_MIN;
        minimum=INT_MAX;
    }
};
node* buildTree(int*pre,int*in,int s,int e)
{
    static int i=0;
    if(s>e)
    {
        return nullptr;
    }
    node*root=new node(pre[i]);
    int index=-1;
    for(int j=s; j<=e; j++)
    {
        if(pre[i]==in[j])
        {
            index=j;
        }
    }
    i++;
    root->left=buildTree(pre,in,s,index-1);
    root->right=buildTree(pre,in,index+1,e);
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
nodeHelper largestBST(node*root)
{
    if(root==nullptr)
    {
        return nodeHelper();
    }
    nodeHelper leftSubtree=largestBST(root->left);
    nodeHelper rightSubtree=largestBST(root->right);
    nodeHelper curr;
    if(leftSubtree.maximum<=root->data && rightSubtree.minimum>=root->data && leftSubtree.isBST && rightSubtree.isBST)
    {
        curr.isBST=true;
        curr.maximum=max(rightSubtree.maximum,root->data);
        curr.minimum=min(leftSubtree.minimum,root->data);
        curr.size=1+leftSubtree.size+rightSubtree.size;
    }
    else
    {
        curr.isBST=false;
        curr.size=max(leftSubtree.size,rightSubtree.size);
    }
    return curr;
}
int main()
{
    int n;
    cin>>n;
    int pre[n];
    for(int i=0; i<n; i++)
    {
        cin>>pre[i];
    }
    int in[n];
    for(int i=0; i<n; i++)
    {
        cin>>in[i];
    }
    node*root=buildTree(pre,in,0,n-1);
    nodeHelper ans=largestBST(root);
    cout<<ans.size;
}

