#include<iostream>
using namespace std;
void display(int [][3],int,int);
int main()
{
    int arr[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
    };
    display(arr, 3 ,3); 
}
// static declearation of 2D array
// rows and coloum are alaways constant
void display(int arr [][3],int row,int col)
{
    cout<<"\nMatrix is:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<" "<<arr[i][j]<<" ";  
        }
        cout<<"\n";
    }
}