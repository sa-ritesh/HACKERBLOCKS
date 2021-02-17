#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int s=0;
        long long int e=n;
        long long int ans=0;
        while(s<=e)
        {
            long long int mid=(s+e)/2;
            if(pow(mid,k)<=n)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}
