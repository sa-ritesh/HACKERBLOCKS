#include<iostream>
using namespace std;
int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int space=1;
        for(; space<=n-i; space++)
        {
            cout<<" ";
        }

        if(i==1)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            for(int j=0; j<=i-1; j++)
            {
                cout<<ncr(i-1,j)<<" ";
            }
        }
        cout<<endl;
    }
}
