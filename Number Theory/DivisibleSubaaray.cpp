#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        long long int pre[n]= {0};
        int sum=0;
        pre[0]=1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            sum%=n;
            sum=(sum+n)%n;
            pre[sum]++;
        }
        long long int ans=0;
        for(int i=0; i<n; i++)
        {
            int m=pre[i];
            ans+=(m*(m-1))/2;
        }
        cout<<ans<<endl;
    }

}
