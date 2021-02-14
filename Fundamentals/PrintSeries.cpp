#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int i=1;
    int count=0;
    while(count!=n1)
    {
        int ans=(3*i)+2;
        if(ans<=n2)
        {
            i++;
            continue;
        }
        if(ans%n2==0)
        {
            i++;
        }
        else
        {
            cout<<ans<<endl;
            count++;
            i++;
        }
    }
}
