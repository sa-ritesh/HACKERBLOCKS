#include<iostream>
using namespace std;
int count=1;
void ans(string s, int i)
{
    if(i==s.length())
    {
        cout<<count;
        return;
    }

    if(i>0)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            cout<<count;
            cout<<s[i];

            count=1;
        }
    }
    ans(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    cout<<s[0];
    ans(s,0);
}
