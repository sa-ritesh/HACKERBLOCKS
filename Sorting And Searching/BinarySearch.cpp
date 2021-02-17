#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool isPresent=false;
    long long int target;
    cin>>target;
    long long int s=0,e=n-1;
    long long int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==target)
        {
            isPresent=true;
            break;
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
    if(isPresent)
    {
        cout<<mid;
    }
    else
    {
        cout<<-1;
    }
}

