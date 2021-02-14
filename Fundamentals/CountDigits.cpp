#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int digit;
    cin>>n>>digit;
    int count=0;
    while(n>0)
    {
        int ld=n%10;
        if(ld==digit)
        {
            count++;
        }
        n/=10;
    }
    cout<<count;
}
