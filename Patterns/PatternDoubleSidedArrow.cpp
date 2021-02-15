#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=0;
    int p=(n/2)+1;
    int space2=-1;
    while(p>=1)
    {
        space=space+2;
        p--;
    }
    for(int row=1; row<=(n/2)+1; row++)
    {
        int i=0;
        while(i<=space)
        {
            cout<<"  ";
            i++;
        }
        for(int column=row; column>=1; column--)
        {
            cout<<column<<" ";
        }
        if(row>=2)
        {
            int k=1;
            while(k<=space2)
            {
                cout<<"  ";
                k++;
            }
            for(int f=1; f<=row; f++)
            {
                cout<<f<<" ";
            }
        }

        space2=space2+2;
        space=space-2;
        cout<<endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////
    space2=space2-4;
    space=space+4;
    for(int row=(n/2); row>=1; row--)
    {
        int i=0;
        while(i<=space)
        {
            cout<<"  ";
            i++;
        }
        for(int column=row; column>=1; column--)
        {
            cout<<column<<" ";
        }
        if(row>=2)
        {
            int k=1;
            while(k<=space2)
            {
                cout<<"  ";
                k++;
            }
            for(int f=1; f<=row; f++)
            {
                cout<<f<<" ";
            }
        }

        space2=space2-2;
        space=space+2;
        cout<<endl;
    }

    return 0;
}
