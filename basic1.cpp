#include<iostream>
#define size 5
using namespace std;
void accept(int *p)
{
    cout<<"\nEnter "<<size<<" Element ";
    int i;
    for(i=0;i<size;i++)
    {
        cin>>p[i];
    }
}
void display(int *p)
{
    cout<<"\nArray elements Are : ";
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<"\t";
    }
}
int main()
{
    int arr[size];
    accept(arr);
    display(arr);
 
}
int main2()
{
    int arr[5]={1,23,24,54,7};
    int *p=arr;
    int i;
    for(i=1;i<5;i++)
    {
        cout<<arr+i<<"\t"<<p+i<<"\n";
        cout<<*(arr+1)<<"\t"<<*(p+1)<<"\n";
    }
    // we perform same taks using for loop 
}
int main1()
{
    int arr[5]={1,23,24,54,7};
    int *p=arr;
    int i;
    cout<<arr<<"\t"<<p<<"\n"; //0x115afffc70    0x115afffc70 same address
    cout<<*(arr)<<"\t"<<*(p)<<"\n"; // 1  1 same value
    cout<<arr+0<<"\t"<<p+0<<"\n";
    cout<<*(arr+0)<<"\t"<<*(p+0)<<"\n";
    cout<<arr+1<<"\t"<<p+1<<"\n";
    cout<<*(arr+i)<<"\t"<<*(p+i)<<"\n";
// 0x1001ff7f0     0x1001ff7f0
// 1       1
// 0x1001ff7f4     0x1001ff7f4 // Adress is change bt 4 byte to access the next element
// 23      23
}