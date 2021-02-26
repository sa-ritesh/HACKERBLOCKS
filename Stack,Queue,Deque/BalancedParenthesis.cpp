#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    stack<char> pile;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            pile.push(s[i]);
        }
        else if(s[i]=='}' && pile.top()=='{')
        {
            pile.pop();
        }
        else if(s[i]==')' && pile.top()=='(')
        {
            pile.pop();
        }
        else if(s[i]==']' && pile.top()=='[')
        {
            pile.pop();
        }
        else
        {
            cout<<"No";
            exit(0);
        }
    }
    if(pile.empty())
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
