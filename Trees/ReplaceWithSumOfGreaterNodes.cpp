#include<iostream>
#include<algorithm>
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
node*buildTree(int*arr,int s, int e)
{
    if(s>e)
    {
        return nullptr;
    }
    int mid=(s+e)/2;
    node*root=new node(arr[mid]);
    root->left=buildTree(arr,s,mid-1);
    root->right=buildTree(arr,mid+1,e);
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
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i=1;i<=n-1;i++){
        arr[i]+=arr[i-1];
    }
    reverse(arr,arr+n);
    node*root=buildTree(arr,0,n-1);
    print(root);
}
