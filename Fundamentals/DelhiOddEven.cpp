#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        int sumEven=0;
        int sumOdd=0;
        bool isAllowed=false;
        cin>>n;
        while(n>0)
        {
            int ld=n%10;
            if(ld%2==0)
            {
                sumEven+=ld;
            }
            else
            {
                sumOdd+=ld;
            }
            n/=10;
        }
        //cout<<sumEven<<" "<<sumOdd<<endl;
        if(sumEven%4==0 || sumOdd%3==0)
        {
            isAllowed=true;
        }
        if(isAllowed)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
