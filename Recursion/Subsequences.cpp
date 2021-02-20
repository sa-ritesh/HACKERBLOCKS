#include<iostream>
using namespace std;
string arr[100];
int k=0;
void subsequence(string in, string out)
{
    if(in.empty())
    {
        arr[k]=out;
        k++;
        return;
    }

    subsequence(in.substr(1),out+in[0]);
    subsequence(in.substr(1),out);
}
int main()
{
    string in;
    cin>>in;
    string out;
    int n=in.length();
    subsequence(in,out);
    int count=0;
    for(int i=k-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
        count++;
    }
    cout<<endl;
    cout<<count;

}
