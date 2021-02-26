#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> s;
    while(n--)
    {
        int a,b;
        cin>>a;
        if(a==2)
        {
            cin>>b;
            s.push(b);
        }
        else
        {
            if(s.empty())
            {
                cout<<"No Code"<<endl;
            }
            else
            {
                cout<<s.top()<<endl;
                s.pop();
            }
        }
    }

}
