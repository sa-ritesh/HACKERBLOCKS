#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int num=n;
    int count=0;
    long long int sum=0;
    while(num>0)
    {
        count++;
        num/=10;
    }
    num=n;
    while(num>0)
    {
        int ld=num%10;
        sum+=pow(ld,count);
        num/=10;
    }
    if(sum==n)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
