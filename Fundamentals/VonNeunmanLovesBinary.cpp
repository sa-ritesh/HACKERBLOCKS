#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int p=1;
        int sum=0;
        for(int i=n-1; i>=0; i--)
        {
            int ld=(s[i]-'0')*p;
            sum+=ld;
            p*=2;
        }
        cout<<sum<<endl;
    }
}
