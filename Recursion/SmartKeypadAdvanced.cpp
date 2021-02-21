#include<iostream>
#include<vector>
using namespace std;
string searchIn [] =
{
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"
};
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
vector <string> v;
void keypad(char* in, char* out,int i, int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        v.push_back(out);
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
    for(int i=0; i<11; i++)
	{
		for(auto j: v)
		{
			if(searchIn[i].find(j))
				cout<<searchIn[i]<<endl;
		}
	}
}
