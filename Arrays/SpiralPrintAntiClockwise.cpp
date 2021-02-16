#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int startRow=0, startCol=0, endRow=n-1, endCol=m-1;
    while(startRow<=endRow)
    {
        for(int i=startRow; i<=endRow; i++)
        {
            cout<<arr[i][startCol]<<", ";
        }
        startCol++;
        for(int i=startCol; i<=endCol; i++)
        {
            cout<<arr[endRow][i]<<", ";
        }
        endRow--;
        for(int i=endRow; i>=startRow; i--)
        {
            cout<<arr[i][endCol]<<", ";
        }
        endCol--;
        for(int i=endCol; i>=startCol; i--)
        {
            cout<<arr[startRow][i]<<", ";
        }
        startRow++;
    }
    cout<<"END";
}
