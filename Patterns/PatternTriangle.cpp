#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dest=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(int j=i; j<=dest; j++)
        {
            cout<<j<<" ";
        }
        for(int j=dest-1; j>=i; j--)
        {
            cout<<j<<" ";
        }
        dest+=2;
        cout<<endl;
    }
}
