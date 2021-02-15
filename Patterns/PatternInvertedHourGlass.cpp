#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val=n;
    int innerSpace=((n-1)*2)+1;
    for(int i=1; i<=n+1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<val<<" ";
            val--;
        }
        for(int j=1; j<=innerSpace; j++)
        {
            cout<<"  ";
        }
        if(i==n+1)
        {
            val+=2;
        }
        else
        {
            val++;
        }
        for(int j=1; j<=i; j++)
        {
            if(val<=n)
            {
                cout<<val<<" ";
            }
            val++;
        }
        val=n;
        innerSpace-=2;
        cout<<endl;
    }
    innerSpace+=4;
    val=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<val<<" ";
            val--;
        }
        for(int j=1; j<=innerSpace; j++)
        {
            cout<<"  ";
        }
        for(int j=i; j<=n; j++)
        {
            cout<<j<<" ";
        }
        val=n;
        innerSpace+=2;
        cout<<endl;
    }
}
