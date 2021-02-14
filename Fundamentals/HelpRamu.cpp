#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int d=0;
    while(d<tc)
    {
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n, m;
        cin>>n>>m;
        int x;
        int totalRickshaw=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            int p=min(x*c1,c2);
            totalRickshaw+=p;
        }
        int ansRickshaw;
        ansRickshaw = min(totalRickshaw,c3);

        int y;
        int totalCab=0;
        for(int i=0; i<m; i++)
        {
            cin>>y;
            int p=min(y*c1,c2);
            totalCab+=p;
        }
        int ansCab;
        ansCab = min(totalCab,c3);
        int slAns=ansCab+ansRickshaw;
        cout<<min(slAns,c4)<<endl;
        d++;
    }
    return 0;
}
