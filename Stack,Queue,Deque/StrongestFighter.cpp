#include<iostream>
#include<deque>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int arr[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    deque<int> q;
    int i=0;
    for(; i<k; i++)
    {
        while(!q.empty() && arr[i]>arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    i=k;
    for(; i<n; i++)
    {
        cout<<arr[q.front()]<<" ";
        while(!q.empty() && q.front()<=i-k)
        {
            q.pop_front();
        }
        while(!q.empty() && arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    cout<<arr[q.front()];

}
