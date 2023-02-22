#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;

}
void swappointer(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void swapreference(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=3, b=4;
    cout<<"The value of a is "<<a<<"The value of b is "<<b
    <<"before swapping"<<endl;
    swap(a,b);// call by value but does not work.After caaling they destroy.so they can't change the values.
    cout<<"The value of a is"<<a<<"The value of b is"<<b
    <<"after swapping"<<endl;
    swappointer(&a,&b);// call by pointer reference work.
    cout<<"The value of a is"<<a<<"The value of b is"<<b
    <<"after swapping"<<endl;
    swapreference(a,b);// call by pointer reference work.
    cout<<"The value of a is"<<a<<"The value of b is"<<b
    <<"after swapping"<<endl;
    return 0;
}
