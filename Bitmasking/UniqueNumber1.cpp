#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int totalXor=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        totalXor=totalXor^arr[i];
    }
    cout<<totalXor;
}

