#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    stack<pair<int,int>> s;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        int ans=1;
        if(s.empty())
        {
            s.push(make_pair(arr[i],ans));
        }
        else
        {
            while(s.empty()==false && s.top().first<arr[i])
            {

                ans+=s.top().second;
                s.pop();
            }
            s.push(make_pair(arr[i],ans));
        }
        cout<<ans<<" ";
    }
    cout<<"END";

}
