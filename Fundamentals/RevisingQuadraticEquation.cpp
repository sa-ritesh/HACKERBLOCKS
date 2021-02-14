#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int D=(b*b)-(4*(a*c));
    if(D==0)
    {
        int x1=((-b)+(pow(D,0.5)))/(2*a);
        cout<<"Real and Equal"<<endl;
        cout<<x1<<" "<<x1;
    }
    else if(D>0)
    {
        int x1=((-b)+(pow(D,0.5)))/(2*a);
        int x2=((-b)-(pow(D,0.5)))/(2*a);
        cout<<"Real and Distinct"<<endl;
        cout<<min(x1,x2)<<" "<<max(x1,x2);
    }
    else
    {
        cout<<"Imaginary";
    }
}
