#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int n;
    cin>>n;
    int i=0;
    while(n>0)
    {
        v.push_back(n%8);
        n=n/8;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
}
