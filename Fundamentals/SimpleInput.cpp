#include<iostream>
using namespace std;
int main()
{
    int n=1;
    int sum=0;
    while(n!=0)
    {
        int d;
        cin>>d;
        sum+=d;
        if(sum>=0)
        {
            cout<<d<<endl;
        }
        else
        {
            n=0;
        }
    }

}
