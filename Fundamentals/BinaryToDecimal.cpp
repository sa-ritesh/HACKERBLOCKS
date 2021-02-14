#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int sum=0;
    int p=1;
    while(n>0)
    {
        int ld=n%10;
        sum+=ld*p;
        p*=2;
        n/=10;
    }
    cout<<sum;
}
