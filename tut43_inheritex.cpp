#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
    1.Simplecalculator-Take 2 input  as no. using utility function
    and perform +,-,*,/etc... and display result using
    another function. 
    2.ScientificCalculator-Take 2 input as no. using utility function
    and perfrom any 4 scientific operation and display result using
    another function.

    Create another class HYbridCalculator and inherit using 2 given 
    classes.
    1.Create an object of HybridCalculator and Display result
    of simple and scientific calculator.
    2.Code resuability implemented.
*/
class Simple
{
    protected:
    int a,b;
    public:
    void process()
    {
        cout<<"The Addition is : "<<a+b<<endl;
        cout<<"The Multiplication is : "<<a*b<<endl;
        cout<<"The Subtraction is : "<<a-b<<endl;
        cout<<"The Divide is : "<<a/b<<endl;
        cout<<"The Reminder is : "<<a%b<<endl;
    }
    void setValue(int x,int y)
    {
        a=x;
        b=y;
    }
};
class Scientific
{
    protected:
    int a1,b1;
    public:
    void process1()
    {
        cout<<"The Square root is : "<<sqrt(a1)<<endl;
        cout<<"The Square root is : "<<sqrt(b1)<<endl;
        cout<<"The Cube root is : "<<cbrt(a1)<<endl;
        cout<<"The Cube root is : "<<cbrt(b1)<<endl;
    }
    void setValue1(int x,int y)
    {
        a1=x;
        b1=y;
    }
};
class Hybrid :public Simple,public Scientific
{
    public:
    void Display()
    {
        process();
        process1();
    }
};
int main()
{
    int x,y;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;
    Simple s;
    s.setValue(x,y);
    s.process();

    Scientific sc;
    sc.setValue1(x,y);
    sc.process1();

    Hybrid h;
    h.setValue(x,y);
    h.setValue1(x,y);
    h.Display();
}