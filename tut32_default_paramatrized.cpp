#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(int x, int y);
    void printNumber()
    {
        cout<<"Your no. is: "<<a <<" and "<<b<<endl; 
    }

};
Complex :: Complex(int x, int y)
//This is parametrized constructor, as it takes 2 arguement. 
{

    a=x;
    b=y;
}
int main()
{
    //Implicit call
    Complex c1(4,6);
    c1.printNumber();

    //Explicit call
    Complex c2=Complex(3.,2);
    c2.printNumber();
    return 0;
}