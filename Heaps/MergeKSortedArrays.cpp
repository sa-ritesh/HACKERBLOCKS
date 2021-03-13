#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >pq;
    vector<priority_queue<int,vector<int>, greater<int> > >v;
    vector<int> ans;
    for(int i=0; i<k; i++)
    {
        priority_queue<int,vector<int>, greater<int> > a;
        for(int j=0; j<n; j++)
        {
            int d;
            cin>>d;
            a.push(d);
        }
        v.push_back(a);
    }
    for(int i=0; i<k; i++)
    {
        pq.push(make_pair(v[i].top(),i));
    }
    while(!pq.empty())
    {
        ans.push_back(pq.top().first);
        pair<int,int> p=pq.top();
        pq.pop();
        v[p.second].pop();
        if(!v[p.second].empty())
        {
            pq.push(make_pair(v[p.second].top(),p.second));
        }
    }
    for(auto i: ans)
    {
        cout<<i<<" ";
    }

}
