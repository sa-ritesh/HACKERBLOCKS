#include<iostream>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
void keypad(char* in, char* out,int i, int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=in[i]-'0';

    for(int k=0; table[digit][k]!='\0'; k++)
    {
        out[j]=table[digit][k];
        keypad(in,out,i+1,j+1);
    }
}

int main()
{
    char in[100];
    cin>>in;
    char out[100];
    keypad(in,out,0,0);

}
