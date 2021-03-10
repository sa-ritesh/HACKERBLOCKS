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
    node* l=root->left;
    node* r=root->right;
    if(l==nullptr){
        cout<<"END";
    }
    else{
        cout<<l->data;
    }
    cout<<" => "<<root->data<<" <= ";
    if(r==nullptr){
        cout<<"END";
    }
    else{
        cout<<r->data;
    }
    cout<<endl;

    print(root->left);
    print(root->right);
    return;
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
    int m;
    cin>>m;
    int in[m];
    for(int i=0; i<m; i++)
    {
        cin>>in[i];
    }
    node*root=buildTree(pre,in,0,n-1);
    print(root);
}
