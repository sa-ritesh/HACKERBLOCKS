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
        for(long long int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(long long int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

