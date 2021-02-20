#include<iostream>
using namespace std;
long long int result(long long int*arr, long long int i, long long int j)
{
    if(i>j)
    {
        return 0;
    }
    long long int q1=arr[i]+min(result(arr,i+2,j),result(arr,i+1,j-1));
    long long int q2=arr[j]+min(result(arr,i,j-2),result(arr,i+1,j-1));
    long long int q=max(q1,q2);
    return q;
}
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<result(arr,0,n-1);

}
