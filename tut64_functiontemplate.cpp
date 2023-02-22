#include<iostream>
using namespace std;
//Function Template
template <class t1,class t2>
float average(t1 a,t2 b)
{
    float avg=(a+b)/2;
    return avg;
}
template <class t>
void swapp(t &a, t &b)
{
    t temp=a,
    a=b;
    b=temp;
}
int main()
{
    float f=average(3,2);
    cout<<"The average is : "<<f<<endl;
    float f1=average(3.7,2.8);
    cout<<"The average is : "<<f1<<endl;
    int x=4,y=2;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}