#include<iostream>
using namespace std;
class Complex
{
    float real,complex;
    public:
    void setdata(float a,float b)
    {
        real=a;
        complex=b;
    }
    void getdata()
    {
        cout<<"The value of Real no. is : "<<real<<endl;
        cout<<"The value of Complex no. is : "<<complex<<endl;
    }

};
int main()
{
    Complex c1;
    c1.setdata(1,2);
    c1.getdata();
    //Another way to create object with the help of pointer.
    Complex *ptr=&c1;
    (*ptr).setdata(3,4);
    (*ptr).getdata();
    //Or
    Complex *p=new Complex;
    (*p).setdata(5,6);
    (*p).getdata();
    //Array of Objects with Arrow operator.
    Complex *pt=new Complex[4];
    pt->setdata(7,8);
    pt->getdata();
    /*Or we can print remaining 3index objects value by uisng
    increamentaion in pt.*/
    return 0;
}