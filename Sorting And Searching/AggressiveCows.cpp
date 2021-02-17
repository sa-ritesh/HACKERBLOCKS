#include<iostream>
#include<algorithm>
using namespace std;
bool isValid(long long int n,long long int*arr, long long int c, long long int mid)
{
    long long int i=0;
    long long int j=i+1;
    long long int count=1;
    while(i<n && j<n)
    {
        if(arr[j]-arr[i]<mid)
        {
            j++;
        }
        else
        {
            count++;
            i=j;
            j=i+1;
        }
    }
    if(count<c){
        return false;
    }
    return true;
}
int result(long long int n, long long int*arr, long long int c, long long int s, long long int e)
{
    long long int ans=0;
    while(s<=e)
    {
        long long int mid=(s+e)/2;
//        cout<<mid<<endl;
        if(isValid(n,arr,c,mid))
        {
            s=mid+1;
            ans=mid;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    long long int n,c;
    cin>>n>>c;
    long long int arr[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int s=0,e=arr[n-1];
    cout<<result(n,arr,c,s,e);

}
