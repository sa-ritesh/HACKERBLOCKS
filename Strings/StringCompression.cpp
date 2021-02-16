#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            cout<<s[i]<<count+1;
            count=0;
        }
    }
}

