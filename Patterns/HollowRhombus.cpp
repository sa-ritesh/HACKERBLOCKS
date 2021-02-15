#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        if(i==1 || i==n)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(int j=1; j<=n-2; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        space--;
        cout<<endl;
    }
}
