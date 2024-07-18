#include<iostream>
using namespace std;
void accept(int (*p)[5])
{
    cout<<"\n Enter Array Element";
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>p[i][j];
        }
    }   
}
void display(int (*p)[5])
{
    int i,j;
    cout<<"Array Element are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<"\t"<<p[i][j];
        }
        cout<<"\n";
    }
}
int main()
{
    int arr[3][5];
    accept(arr);
    display(arr);
    return 0;
}