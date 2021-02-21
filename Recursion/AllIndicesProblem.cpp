#include<iostream>
using namespace std;
void ans(int n, int*arr, int i, int target)
{
    if(i==n)
    {
        return;
    }
    if(arr[i]==target)
    {
        cout<<i<<" ";
    }
    ans(n,arr,i+1,target);
}
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
    ans(n,arr,0,target);
}
