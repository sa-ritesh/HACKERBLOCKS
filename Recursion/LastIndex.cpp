#include<iostream>
using namespace std;
long long int ans=-1;
long long int lastIndex(long long int n, long long int*arr, long long int target, long long int i)
{
    if(n==0)
    {
        return 0;
    }
    if(arr[i]==target)
    {
        ans=i;
    }
    lastIndex(n-1,arr,target,i+1);
    return ans;
}
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long int target;
    cin>>target;
    cout<<lastIndex(n,arr,target,0);
}
