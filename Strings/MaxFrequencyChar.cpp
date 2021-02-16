#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[128]= {0};
    string s;
    cin>>s;
    int index=0,sum=INT_MIN;
    for(int i=0; i<s.length(); i++)
    {
        int num=s[i]-'0';
        arr[num]++;
    }
    for(int i=0; i<128; i++)
    {
        if(arr[i]>sum)
        {
            sum=arr[i];
            index=i;
        }
    }
    char c=index + '0';
    cout<<c;
}
