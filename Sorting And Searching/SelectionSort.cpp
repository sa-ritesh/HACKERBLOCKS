#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(long long int i=0; i<n-1; i++)
    {
        long long int minIndex=i;
        for(long long int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(long long int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
