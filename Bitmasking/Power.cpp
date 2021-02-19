#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=1;
    while(b>0)
    {
        int lb=(b&1);
        if(lb==1)
        {
            ans*=a;
        }
        a=a*a;
        b=b>>1;
    }
    cout<<ans;
}
