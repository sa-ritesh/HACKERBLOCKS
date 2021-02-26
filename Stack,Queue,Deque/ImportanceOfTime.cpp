#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void insertAtBottom(stack<int>&s)
{
    stack<int> a;
    int x=s.top();
    s.pop();
    while(!s.empty())
    {
        a.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!a.empty())
    {
        s.push(a.top());
        a.pop();
    }
}
int main()
{
    int n;
    cin>>n;
    stack<int>s;
    stack<int>r;
    int arr[n];
    int brr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        s.push(arr[i]);
    }

    for(int j=0;j<n;j++){
        cin>>brr[j];
    }
    reverse(brr,brr+n);
    for(int j=0;j<n;j++){
        r.push(brr[j]);
    }
    int time=0;
    while(!s.empty()){
        if(s.top()==r.top()){
            cout<<"S.TOP-> "<<s.top()<<endl;
            time+=1;
            s.pop();
            r.pop();
        }
        else{
                cout<<"bottom-> "<<s.top()<<endl;
            insertAtBottom(s);

            time+=1;
        }
    }
    cout<<time;
}
