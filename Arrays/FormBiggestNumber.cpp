#include<iostream>
#include<algorithm>
using namespace std;
bool compare(string a, string b)
{
    if(a+b>b+a)
    {
        return true;
    }
    return false;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        sort(s,s+n,compare);
        for(int i=0; i<n; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}
