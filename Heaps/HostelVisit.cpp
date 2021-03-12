#include<iostream>
#include<queue>
using namespace std;
int main()
{
    long long int q,k;
    cin>>q>>k;
    priority_queue<long long int> pq;
    while(q--)
    {
        long long int c;
        cin>>c;
        if(c==1)
        {
            long long int x,y;
            cin>>x>>y;
            long long int dist=(x*x)+(y*y);
            if(pq.size()<k)
            {
                pq.push(dist);
                //cout<<"CASE-1 ->  SIZE->  "<<pq.size()<<endl;
            }
            else if(dist<pq.top())
            {
                pq.pop();
                //cout<<"CASE-2"<<endl;
                pq.push(dist);
            }
        }
        else
        {
            cout<<pq.top()<<endl;
        }
    }
}
