#include<iostream>
using namespace std;
void replaceAllPi(string s, int i)
{
    if(i==s.length())
    {
        return;
    }
    if(s[i]=='p' && s[i+1]=='i')
    {
        cout<<"3.14";
        replaceAllPi(s,i+2);
    }
    else
    {
        cout<<s[i];
        replaceAllPi(s,i+1);
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        replaceAllPi(s,0);
        cout<<endl;
    }
}
