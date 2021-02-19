#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int bit[64]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        int a=arr[i];
        int j=0;
        while(a>0)
        {
            int ld=a&1;
            bit[j]+=ld;
            j++;
            a=a>>1;
        }
    }
    cout<<endl;
    int ans=0;
    int p=1;
    for(int i=0; i<64; i++)
    {
        bit[i]%=3;
        ans+=(bit[i]*p);
        p*=2;
    }
    cout<<ans<<endl;
}
