#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int cs=0,ms=INT_MIN;
        for(int i=0; i<n; i++)
        {
            cs+=arr[i];
            if(cs<0)
            {
                cs=0;
            }
            ms=max(cs,ms);
        }
        cout<<ms<<endl;
    }
}
