#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s=0,e=n-1;
    int ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]>arr[mid+1])
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<arr[mid-1])
        {
            ans=mid-1;
            break;
        }
        else if(arr[s]<=arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }

    }
    cout<<ans;
}
