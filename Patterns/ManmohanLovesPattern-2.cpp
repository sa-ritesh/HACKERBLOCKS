#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<i<<endl;
            continue;
        }
        for(int j=1; j<=i; j++)
        {

            if(j==1 || j==i)
            {
                cout<<i-1;
            }

            else
            {
                cout<<0;
            }


        }
        cout<<endl;
    }
}

