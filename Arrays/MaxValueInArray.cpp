#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    int ans=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans;
}

