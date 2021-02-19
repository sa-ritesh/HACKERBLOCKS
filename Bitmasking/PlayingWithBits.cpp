#include<iostream>
using namespace std;
int countSetBits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a; i<=b; i++)
        {
            sum+=countSetBits(i);
        }
        cout<<sum<<endl;
    }
}
