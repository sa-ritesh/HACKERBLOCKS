#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    bool isPresent=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    int j=m-1;
    int i=0;
    while(i<n && j>=0)
    {
        if(arr[i][j]==target)
        {
            isPresent=true;
            break;
        }
        else if(arr[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(isPresent)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
}
