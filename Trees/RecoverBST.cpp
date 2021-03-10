#include<iostream>
#include<vector>
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
vector<int>v;
node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return nullptr;
    }
    node*root=new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void print(node*root)
{
    if(root==nullptr)
    {
        return;
    }
    print(root->left);
    v.push_back(root->data);
    print(root->right);
    return;
}
int main()
{
    node*root=buildTree();
    print(root);
    int a,b;
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        //cout<<v[i]<<" ";
        if(v[i]>v[i+1]){
            if(count==0){
                a=v[i];
                count++;
            }
            b=v[i+1];
        }
    }
    cout<<min(a,b)<<" "<<max(a,b);
}
