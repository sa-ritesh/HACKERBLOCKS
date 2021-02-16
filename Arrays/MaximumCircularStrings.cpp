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
        int arr[2*n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            arr[n+i]=arr[i];
        }
        int cs=0,ms=INT_MIN;
        for(int i=0; i<n; i++)
        {
            int j=i;
            int count=0;
            cs=0;
            while(count<n)
            {

                cs+=arr[j];
                if(cs<0)
                {
                    cs=0;
                }
                ms=max(cs,ms);
                count++;
                j++;
            }
        }
        cout<<ms<<endl;
    }
}
