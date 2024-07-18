#include<iostream>
using namespace std;
int main1()
{
     int r,c;
     cout<<"Enter no of Rows: "<<endl;
     cin>>r;
     cout<<"Enter No of coloumns:"<<endl;
     cin>>c;
     // Array Create
     int* row[r];
     for(int i=0;i<r;i++)
     {
        row[i]= new int [c];
     }

    // Array Store
    for(int i=0; i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          cin>>row[i][j];   
        }
    } 
    // Array Display
    for(int i=0;i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            // cout<<" "<<*(*(row+i)+j)<<" "; ******* by using pointer arithematic*****
            cout<<" "<<row[i][j]<<" ";
        }
        cout<<'\n';
    }
}
 void createMatrix(int** ,int ,int );
 void storeMatrix(int**,int ,int );
 void displayMatrix(int**,int ,int );


 void createMatrix(int**rows,int r,int c)
 {
    for(int i=0;i<r;i++)
    {
        rows[i] = new int(c);
    }
 }
 void storeMatrix(int**rows,int r,int c)
 {
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"\n Enter the value at mat["<<i<<"]["<<j<<"]";
            cin>>rows[i][j];
        }
    }
 }
 void displayMatrix(int**rows,int r,int c)
 {
    cout<<"\n Matrix \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0; j<c;j++)
        {
            cout<<" "<<rows[i][j]<<" ";
        }
        cout<<"\n";
    }
 }

int main()
{
    int r,c;
    cout<<"Enter no of rows"<<endl;
    cin>>r;
    cout<<"Enter no of coloum"<<endl;
    cin>>c;
    int* rows[r];
    createMatrix(rows,r,c);
    storeMatrix(rows,r,c);
    displayMatrix(rows,r,c);
}