#include<iostream>
using namespace std;
bool isValid(long long int n,long long int m,long long int x,long long int y,long long int mid)
{
    long long int total_coupons=((n-mid)*y)+m;
    if((mid*x)<=total_coupons)
    {
        return true;
    }
    else
    {
        return false;
    }

}
long long int ans(long long int n, long long int m, long long int x, long long int y)
{
    long long int s=0, e=n;
    long long int ans=0;
    while(s<=e)
    {
        long long int mid=(s+e)/2;
        if(isValid(n,m,x,y,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    long long int n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<<ans(n,m,x,y);
}

