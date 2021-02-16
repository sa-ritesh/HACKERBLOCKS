#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    cin>>n;
    int arr[n];
    string a;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        a[i]=arr[i]+'0';
    }
    int num1=stoi(a);
    cin>>m;
    int brr[n];
    string b;
    for(int i=0; i<m; i++)
    {
        cin>>brr[i];
        b[i]=brr[i]+'0';
    }
    int num2=stoi(b);
    int sum=num1+num2;
    vector<int> v;
    while(sum>0)
    {
        v.push_back(sum%10);
        sum/=10;
    }
    for(int i=v.size()-1; i>=0; i--)
    {
        cout<<v[i]<<", ";
    }

    cout<<"END";
}
