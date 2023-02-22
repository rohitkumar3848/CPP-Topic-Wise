#include<iostream>
using namespace std;
/*
Passing of objects as a arguement of function and acess the data variable of 
another class function using friend function concept or friend class conmcept.
*/
//Forward Declaration
class Complex;
class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int sumRealComplex(Complex ,Complex );
    int sumCompComplex(Complex ,Complex );

};
class Complex
{
    int a,b;
    //Individually declaring functions as friends
    //friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    //friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

    //Alter-Declaring entire Calculator class as friend
    friend class Calculator;
    public:
    void setNumber(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void displayNumber(void)
    {
        cout<<"The Complex Number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};
int Calculator ::sumRealComplex(Complex o1,Complex o2)
{
        return (o1.a+o2.a);
}
int Calculator ::sumCompComplex(Complex o1,Complex o2)
{
        return (o1.b+o2.b);
}

int main()
{
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(2,3);
    o1.displayNumber();
    o2.displayNumber();

    Calculator calc;
    int resr=calc.sumRealComplex(o1,o2);
    cout<<resr<<endl;

    int resc=calc.sumCompComplex(o1,o2);
    cout<<resc<<endl;
    return 0;
}
