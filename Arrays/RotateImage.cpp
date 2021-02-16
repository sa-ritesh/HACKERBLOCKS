#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m=n;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        reverse(arr[i],arr[i]+n);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i<j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
