#include<iostream>
using namespace std;
int mod(long long int a, long long int b, long long int c)
{
    if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        int y=mod(a,b/2,c);
        return (y*y)%c;
    }
    else
    {
        return ((a%c)*mod(a,b-1,c))%c;
    }
}
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<mod(a,b,c);
}
