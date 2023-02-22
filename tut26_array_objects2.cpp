#include<iostream>
using namespace std;
//Array of objects.
class Complex
{
    int a,b;
    public:
    void getData(int v1, int v2)
    {
        a=v1;
        b=v2;
    }
    void getDataSum(Complex c1, Complex c2)
    {   
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
    void displayData(void)
    {
        cout<<"The Complex Number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.getData(1,2);
    c1.displayData();
    
    c2.getData(3,4);
    c2.displayData();

    c3.getDataSum(c1,c2);
    c3.displayData();

    return 0;
}