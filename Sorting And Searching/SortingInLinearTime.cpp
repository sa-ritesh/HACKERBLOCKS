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
    int lo=0, mid=0, hi=n-1;
    while(mid<=hi)
    {
        if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==0)
        {
            swap(arr[lo],arr[mid]);
            lo++;
            mid++;
        }
        else
        {
            swap(arr[hi],arr[mid]);
            hi--;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}
