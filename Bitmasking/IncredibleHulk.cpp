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
        int a;
        cin>>a;
        cout<<countSetBits(a)<<endl;
    }

}

