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
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int prev=arr[i];
        while(arr[j]>arr[j+1] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
            arr[j+1]=prev;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
