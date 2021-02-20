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
    long long int tc;
    cin>>tc;
    primeSieve(prime,10000005);
    while(tc--)
    {
        long long int count=0;
        long long int a,b;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            if(prime[i]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
