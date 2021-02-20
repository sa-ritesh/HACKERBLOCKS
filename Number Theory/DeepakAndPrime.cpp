#include<iostream>
using namespace std;
long long int prime[10000005]= {0};
long long int* primeSieve(long long int*prime, long long int b)
{

    prime[2]=1;
    for(long long int i=3; i<=b; i+=2)
    {
        prime[i]=1;
    }
    for(long long int i=3; i<=b; i++)
    {
        if(prime[i]==1)
        {
            for(long long int j=i*i; j<=b; j+=i)
            {
                prime[j]=0;
            }
        }
    }
    return prime;
}
int main()
{
    primeSieve(prime,10000005);
    long long int n;
    cin>>n;
    long long int count=0;
    for(int i=1; i<=10000005; i++)
    {
        if(prime[i]==1)
        {
            count++;
            if(count==n)
            {
                cout<<i;
                break;
            }
        }
    }
}
