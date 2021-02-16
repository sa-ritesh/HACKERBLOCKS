#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int num=c;
    if(num>=65 && num<=90)
    {
        cout<<"U";
    }
    else if(num>=97 && num<=122){
        cout<<"L";
    }
    else{
        cout<<"I";
    }
}
