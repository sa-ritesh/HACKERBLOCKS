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
    int target;
    cin>>target;
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        if(arr[s]<=arr[mid])
        {
            if(target<=arr[mid] && target>=arr[s])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else
        {
            if(target>=arr[mid] && target<=arr[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    cout<<ans;
}
