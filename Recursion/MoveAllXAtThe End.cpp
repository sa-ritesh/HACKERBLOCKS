#include<iostream>
using namespace std;
int count=0;
void ans(string s, int i)
{
    if(i==s.length())
    {
        return;
    }
    if(s[i]!='x')
    {
        cout<<s[i];
    }
    else
    {
        count++;
    }
    ans(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    ans(s,0);
    for(int i=1; i<=count; i++)
    {
        cout<<"x";
    }
}
