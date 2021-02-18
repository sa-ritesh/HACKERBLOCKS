#include <iostream>
#include<algorithm>
using namespace std;
bool compare(string a, string b)
{
    if(b==a.substr(0,b.length()))
    {

        return a>b;
    }
    else
    {

        return a<b;
    }
}
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}
