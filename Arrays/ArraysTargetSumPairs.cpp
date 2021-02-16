#include<iostream>
#include<algorithm>
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

    sort(arr,arr+n);
    int lo=0, hi=n-1;int sum=0;
    while(lo<hi)
    {
        int sum=arr[lo]+arr[hi];
        if(sum==target)
        {
            cout<<arr[lo]<<" and "<<arr[hi]<<endl;
            lo++;
        }
        else if(sum>target)
        {
            hi--;
        }
        else
        {
            lo++;
        }
    }
}
