#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        stack<char> pile;
        string s;
        cin>>s;
        bool isDuplicate=false;
        for(int i=0; i<s.length(); i++)
        {
            int ans=0;
            if(s[i]!=')')
            {
                pile.push(s[i]);
            }
            else
            {
                while(pile.top()!='(')
                {
                    pile.pop();
                    ans++;
                }
                pile.pop();
                ans+=1;
                if(ans==1)
                {
                    isDuplicate=true;
                    break;
                }
            }
        }
        if(isDuplicate)
        {
            cout<<"Duplicate"<<endl;
        }
        else
        {
            cout<<"Not Duplicates"<<endl;
        }
    }
}
