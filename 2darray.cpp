#include<iostream>
using namespace std;
int main()
{
    int arr[3][5],i,j;
    cout<<"\n Enter Array element";
    //Outer loop is for rows
    for(i=0;i<3;i++)
    {
        // Inner loop is for cols
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout<<" Display array Elements:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}