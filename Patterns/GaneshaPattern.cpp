#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mid=(n/2)+1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1)
            {
                if(j==1)
                {
                    cout<<"*";
                }
                else if(j>=mid)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i==mid)
            {
                cout<<"*";
            }
            else if(i==n)
            {
                if(j<=mid)
                {
                    cout<<"*";
                }
                else if(j==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(j==1 && i<mid)
                {
                    cout<<"*";
                }
                if(j>1 && j<mid && i<mid)
                {
                    cout<<" ";
                }
                if(j>mid && j<n && i>mid)
                {
                    cout<<" ";
                }
                if(j>=1 && j<mid && i>mid)
                {
                    cout<<" ";
                }
                if(j==mid)
                {
                    cout<<"*";
                }
                if(j==n && i>mid)
                {
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
}

