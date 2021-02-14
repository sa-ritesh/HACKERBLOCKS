#include<iostream>
using namespace std;
int main()
{
    int minF, maxF, step;
    cin>>minF>>maxF>>step;
    for(int i=minF; i<=maxF; i+=step)
    {
        int C=(5*(i-32))/9;
        cout<<i<<"  "<<C<<endl;
    }
    return 0;
}
