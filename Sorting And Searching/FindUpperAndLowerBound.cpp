#include<iostream>
using namespace std;
int lowerBound(int n, int*arr, int target)
{
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int upperBound(int n, int*arr, int target)
{
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int d;
        cin>>d;
        cout<<lowerBound(n,arr,d)<<" "<<upperBound(n,arr,d)<<endl;

    }
}
