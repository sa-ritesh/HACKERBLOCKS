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

    cout<<root->data;

    print(root->left);
    print(root->right);
    return;
}
void printNodesAtDistanceKInSubtree(node* root, int K)
{
    if (root == NULL || K < 0)
    {
        return;
    }

    if (K == 0)
    {
        cout << root->data << " ";
        return;
    }

    printNodesAtDistanceKInSubtree(root->left, K - 1);
    printNodesAtDistanceKInSubtree(root->right, K - 1);
}


int printNodesAtDistanceK(node* root, int target, int K)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->data == target)
    {
        printNodesAtDistanceKInSubtree(root, K);
        return 0;
    }

    int dLeft = printNodesAtDistanceK(root->left, target, K);
    if (dLeft != -1)
    {
        if (dLeft + 1 == K)
        {
            cout << root->data << " ";
        }
        else
        {
            printNodesAtDistanceKInSubtree(root->right, K - dLeft - 2);
        }
        return dLeft + 1;
    }
    int dRight = printNodesAtDistanceK(root->right, target, K);
    if (dRight != -1)
    {
        if (dRight + 1 == K)
        {
            cout << root->data << " ";
        }
        else
        {
            printNodesAtDistanceKInSubtree(root->left, K - dRight - 2);
        }
        return dRight + 1;
    }

    return -1;
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
    //print(root);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int target, k;
        cin>>target>>k;
        printNodesAtDistanceK(root,target,k);
        cout<<endl;
    }
}
