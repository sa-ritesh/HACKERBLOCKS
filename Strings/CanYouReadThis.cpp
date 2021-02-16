#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        int num=s[i];
        if(num>=65 && num<=90 && i>0)
        {
            cout<<endl;
        }
        cout<<s[i];
    }

}
