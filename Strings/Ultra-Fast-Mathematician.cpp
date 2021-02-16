#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a,b;
        cin>>a>>b;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]==b[i])
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
}
