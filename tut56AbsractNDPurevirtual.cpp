#include<iostream>
using namespace std;
/*
Pure Virtual Function:
        A virtual function in C++ for which don't 
        write anything in function and only we have to declared it 
        with assingning by 0.
Abstract class:
        1.Contain at least one pure virtual function and it 
            may be contain normal functions.
        2.Object of abstract class can't be instaintiated but pointer
            and references can be created.
        3.Abstract class mainly used for upcasting, so that it's 
            derived class can use its interface.
*/
class Base
{
    protected:
    int x;
    public:
    virtual void fun()=0;
    Base(int i)
    {
        x=i;
        cout<<"Constructor a is called"<<endl;
    }
};
class Derived :public Base
{
    int y;
    public:
    Derived(int i, int j):Base(i)
    {
        y=j;
    }
    void fun()
    {
        cout<<"The x is "<<x<<endl;
        cout<<"The y is "<<y<<endl;
    }
};
int main()
{
    Derived d1(1,2);
    d1.fun();
    Base *b1;
    b1=&d1;
    b1->fun();
    //Or
    Base *b2=new Derived(1,3);
    b2->fun();
    return 0;
}
