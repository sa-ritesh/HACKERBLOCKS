#include<iostream>
using namespace std;
void result(string s, int i)
{
    if(i==s.length())
    {
        return;
    }
    if(s[i]!=s[i+1])
    {
        cout<<s[i];
    }
    result(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    result(s,0);
}
