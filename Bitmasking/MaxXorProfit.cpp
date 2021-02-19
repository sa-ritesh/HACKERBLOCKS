#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int LxorR=a^b;
    int msb=0;
    while(LxorR>0)
    {
        msb++;
        LxorR=LxorR>>1;
    }
    int ans=0;
    int mask=1;
    while(msb--)
    {
        ans=ans|mask;
        mask=mask<<1;
    }
    cout<<ans;
}
