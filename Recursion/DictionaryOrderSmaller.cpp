#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> v;
void permutation(char*in, int i)
{
    if(in[i]=='\0')
    {
        v.push_back(in);
        return;
    }
    for(int j=i; in[j]!='\0'; j++)
    {
        swap(in[i],in[j]);
        permutation(in,i+1);
        swap(in[i],in[j]);
    }

}
int main()
{
    char in[100];
    cin>>in;
    permutation(in,0);
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=in)
        {
            cout<<v[i]<<endl;
        }
        else
        {
            break;
        }
    }

}
