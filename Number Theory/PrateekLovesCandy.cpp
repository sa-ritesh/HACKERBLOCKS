#include<iostream>
using namespace std;
long long int prime[1000000]= {0};
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
    primeSieve(prime,1000000);
    long long int j=0;
    long long int arr[1000000]= {0};
    for(int i=0; i<=1000000; i++)
    {

        if(prime[i]==1)
        {
            arr[j]=i;
            j++;
        }
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        cin>>n;
        cout<<arr[n-1];
        cout<<endl;
    }
}

