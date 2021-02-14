#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int rootNum=pow(n,0.5);
    bool isPrime=true;
    for(int i=2; i<=rootNum; i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}
