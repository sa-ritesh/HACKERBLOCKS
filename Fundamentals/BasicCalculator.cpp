#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int a,b;
    while(1>0)
    {
        if(ch=='+')
        {
            cin>>a>>b;
            cout<<a+b<<endl;
        }
        else if(ch=='-')
        {
            cin>>a>>b;
            cout<<a-b<<endl;
        }
        else if(ch=='*')
        {
            cin>>a>>b;
            cout<<a*b<<endl;
        }
        else if(ch=='/')
        {
            cin>>a>>b;
            cout<<a/b<<endl;
        }
        else if(ch=='%')
        {
            cin>>a>>b;
            cout<<a%b<<endl;
        }
        else if(ch=='x' || ch=='X')
        {
            break;
        }
        else
        {
            cout<<"Invalid operation. Try again."<<endl;
        }
        cin>>ch;
    }
}
