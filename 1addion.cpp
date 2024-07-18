#include<iostream>
#define size 5
using namespace std;
void accept(int *p)
{
    cout<<"\nEnter 5 number for array";
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
}
void display(int *p)
{
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
}
void sum(int *p,int *q,int *r)
{
    for(int i=0;i<5;i++)
    {
        r[i]=p[i]+q[i];
    }
}

int main()
{
    int a[size],b[size],c[size];
    accept(a);    
    accept(b);    
    sum(a,b,c);
    display(a);  
    display(b);  
    display(c);  
    return 0;

}