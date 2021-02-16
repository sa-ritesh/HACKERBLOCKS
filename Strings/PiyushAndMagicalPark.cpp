#include <iostream>
using namespace std;
int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int g=s;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(g<k)
            {
                cout<<"No";
                exit(0);
            }
            if(arr[i][j]=='.')
            {
                g=g-2;
            }
            else if(arr[i][j]=='*')
            {
                g=g+5;
            }
            else
            {
                break;
            }
            if(j!=n-1)
            {
                g--;
            }
        }
    }

    cout<<"Yes"<<endl;
    cout<<g;

    return 0;
}
