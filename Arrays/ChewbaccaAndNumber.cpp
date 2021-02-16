#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        int integer=s[i]-'0';
        if(i==0)
        {
            if(integer==9)
            {
                continue;
            }
            else
            {
                if(integer>=5)
                {
                    s[i]=(9-integer) + '0';
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            if(integer>=5)
            {
                s[i]=(9-integer)+ '0';
            }
            else
            {
                continue;
            }
        }
    }
    cout<<s;

}
