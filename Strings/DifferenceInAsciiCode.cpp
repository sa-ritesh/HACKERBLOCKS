#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length()-1; i++)
    {
        cout<<s[i];
        int n = s[i+1]-s[i];
        cout<<n;
    }
    cout<<s[s.length()-1];
}
