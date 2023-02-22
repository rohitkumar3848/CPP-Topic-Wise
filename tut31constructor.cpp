#include<iostream>
using namespace std;
/*
Constructor- A constructor is a special member function with same
name as class.
It automatically invoked when the objcet of class is created.
It does not have return type
Constructor is declared as public.
It can't iherited with grant class.
It can't refer to their adress.
It can have default arguements.
*/
class Complex
{
    int a,b;
    public:
    Complex(void);
    void printNumber()
    {
        cout<<"Your no. is: "<<a <<" and "<<b; 
    }

};
Complex :: Complex(void)//This is an default constructor as
//it takes no arguement.
{
    a=9;
    b=10;
    //If we can't intialise the value of a and b then it 
    //throws as a garbage value.
}
int main()
{
    Complex c1;
    c1.printNumber();
    return 0;
}