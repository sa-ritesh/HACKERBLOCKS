#include<iostream>
#include<math.h>
using namespace std;
int res=0;
int ans(string s, int n,int i,int p)
{
    if(i==n)
    {
        return 0;
    }
    res+=((s[i]-'0')*p);
    p/=10;
    ans(s,n,i+1,p);
    return res;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int p=pow(10,n-1);
    cout<<ans(s,n,0,p);
}
