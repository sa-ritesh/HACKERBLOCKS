#include<iostream>
using namespace std;
void result(string s, int i)
{
    if(i==s.length())
    {
        return;
    }
    cout<<s[i];
    if(s[i]==s[i+1])
    {
        cout<<"*";
    }
    result(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    result(s,0);
}
