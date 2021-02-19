#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int totalXor=0;
    int a=0,b=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        totalXor=totalXor^arr[i];
    }
    int pos=0;
    int temp=totalXor;
    while((temp&1)!=1)
    {
        pos++;
        temp=temp>>1;
    }
    int mask=(1<<pos);
    for(int i=0; i<n; i++)
    {
        int d=arr[i]&mask;
        if(d)
        {
            a=a^arr[i];
        }
    }
    b=totalXor^a;
    cout<<min(a,b)<<" "<<max(a,b);



}
