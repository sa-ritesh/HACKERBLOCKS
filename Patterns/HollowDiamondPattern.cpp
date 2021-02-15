#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mid=(n/2)+1;
    int innerSpace=-1;
    for(int i=1; i<=mid; i++)
    {
        for(int j=mid-i+1; j>=1; j--)
        {
            cout<<"* ";
        }
        if(i>1)
        {
            for(int j=1; j<=innerSpace; j++)
            {
                cout<<"  ";
            }
        }
        if(i>1)
        {
            for(int j=mid-i+1; j>=1; j--)
            {
                cout<<"* ";
            }
        }
        if(i==1)
        {
            for(int j=mid+1; j<=n; j++)
            {
                cout<<"* ";
            }
        }
        innerSpace+=2;
        cout<<endl;
    }
    innerSpace-=4;

    int start2=2;
    for(int k=mid+1; k<=n; k++)
    {
        for(int j=1; j<=start2; j++)
        {
            cout<<"* ";
        }
        for(int j=1; j<=innerSpace; j++)
        {
            cout<<"  ";
        }
        if(k<n)
        {
            for(int j=1; j<=start2; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(int j=1; j<=start2-1; j++)
            {
                cout<<"* ";
            }
        }
        innerSpace-=2;
        start2+=1;
        cout<<endl;
    }
}

