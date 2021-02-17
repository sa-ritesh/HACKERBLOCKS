#include<iostream>
using namespace std;
bool isValid(int n, int*arr, int mid,int k)
{
    int student=1;
    int curr_pages=0;
    for(int i=0; i<n; i++)
    {
        if(curr_pages+arr[i]>mid)
        {
            curr_pages=arr[i];
            student++;
            if(student>k)
            {
                return false;
            }
        }
        else
        {
            curr_pages+=arr[i];
        }
    }
    return true;
}

int Result(int n, int* arr, int k, int s, int e)
{
    int ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(isValid(n,arr,mid,k))
        {
            ans=mid;
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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int s=0,e=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            e+=arr[i];
        }
        cout<<Result(n,arr,k,arr[n-1],e)<<endl;
    }
}
