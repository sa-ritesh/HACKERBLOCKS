#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int partitionn(long long int*arr,long long int s, long long int e)
{
    long long int j=s;
    long long int i=s-1;
    long long int pivot=arr[e];
    while(j<e)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quickSort(long long int*arr, long long int s, long long int e)
{
    if(s>=e)
    {
        return;
    }
    long long int p=partitionn(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(long long int i=0; i<n; i++)
    {
        srand(time(nullptr));
        int random=rand();
        int j=random%(i+1);
        swap(arr[i],arr[j]);
    }
    quickSort(arr,0,n-1);
    for(long long int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
