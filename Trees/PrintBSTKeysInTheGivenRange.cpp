#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
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

void print(node* root, int p, int k)
{
    if(root==nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    if(root->data>=p && root->data<=k)
    {
        v.push_back(root->data);
    }
    print(root->left,p,k);
    print(root->right,p,k);
    return;
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
        int p,k;
        cin>>p>>k;
        cout<<"# Preorder : ";
        print(root,p,k);
        cout<<endl;
        cout<<"# Nodes within range are : ";
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        v.clear();
        cout<<endl;
    }
}
