#include<iostream>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
