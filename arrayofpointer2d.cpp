#include<iostream>
using namespace std;
int main()
{
    cout<<"\n Enter array Element"<<endl;
    int arr[3][5], i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout << "Array elements are:" << endl;
    int *p[3]; // ARRAY OF POINTERS
    p[0]=arr[0];
    p[1]=arr[1];
    p[2]=arr[2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<"\t" <<p[i][j]; // ARRAY OF POINTER 
        }
        cout<<endl;
    }
    return 0;

}