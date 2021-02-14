#include<iostream>
using namespace std;
bool isIncreasing(int n, long long int*arr, int start)
{
    bool ans=true;
    for(int i=start; i<n-1; i++)
    {
        if(arr[i]>=arr[i+1])
        {
            ans =false;
            break;
        }
    }
    return ans;
}

bool isDecreasing(int n, long long int*arr, int start)
{
    bool ans=true;
    for(int i=start; i<n-1; i++)
    {
        if(arr[i]<=arr[i+1])
        {
            ans =false;
            break;
        }
    }
    return ans;
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
    if(isIncreasing(n,arr,0) || isDecreasing(n,arr,0))
    {
        cout<<"true";
        exit(0);
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                continue;
            }
            else
            {
               int breakPoint=i;
                for(int j=i; j<n-1; j++)
                {
                    if(arr[j]<arr[j+1])
                    {
                        continue;
                    }
                    else
                    {
                        cout<<"false";
                        exit(0);
                    }
                }
            }
        }
    }
    cout<<"true";
}
