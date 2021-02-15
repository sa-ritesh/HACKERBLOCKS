#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,sum=a+b;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<a<<endl;
            continue;
        }
        else if(i==2)
        {
            cout<<b<<" "<<sum<<endl;
            a=b;
            b=sum;
            sum=a+b;
            continue;
        }
        for(int j=1; j<=i; j++)
        {
            cout<<sum<<" ";
            a=b;
            b=sum;
            sum=a+b;
        }
        cout<<endl;
    }
}
