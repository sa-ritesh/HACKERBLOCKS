#include<iostream>
using namespace std;
char keypad[][10]= {"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
int m=0;
void phone(char*in, char*out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        for(int l=0; out[l]!='\0'; l++)
        {
            cout<<out[l];
        }
        m++;
        cout<<" ";
        return;
    }
    int digit= in[i]-'0';
    if( digit ==0)
    {
        phone(in,out,i+1,j);
    }
    for(int k=0; keypad[digit][k]!='\0'; k++)
    {
        out[j]=keypad[digit][k];
        phone(in,out,i+1,j+1);
    }
}
int main()
{
    char in[100];
    cin>>in;
    char out[100];
    phone(in,out,0,0);
    cout<<endl<<m;
    return 0;
}
