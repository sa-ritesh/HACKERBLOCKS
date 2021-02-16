#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool isPalindrome=true;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i=0, j=n-1;
    while(i<=j)
    {
        if(arr[i]!=arr[j])
        {
            isPalindrome=false;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

