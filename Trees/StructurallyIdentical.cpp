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
node*buildTreee()
{
    string s;
    cin>>s;
    if(s=="false")
    {
        return 0;
    }
    if(s=="true")
    {
        cin>>s;
    }
    node*root=new node(s);
    root->left=buildTreee();
    root->right=buildTreee();
    return root;
}
bool areIdentical(node*A, node*B)
{
    if(A==nullptr && B==nullptr)
    {
        return true;
    }
    if(A!=nullptr && B!=nullptr)
    {
        bool leftSubtree=areIdentical(A->left,B->left);
        bool rightSubtree=areIdentical(A->right,B->right);
        return (leftSubtree & rightSubtree);
    }
    return false;
}
int main()
{
    node*root1=buildTreee();

    node*root2=buildTreee();
    bool ans=areIdentical(root1,root2);
    if(ans)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
