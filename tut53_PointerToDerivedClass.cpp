#include<iostream>
using namespace std;
/*
Pointer to objects odf a base class are compatible with pointer
    to object of derived class.
*/
class Base
{
    public:
    int base;
    void Display()
    {
        cout<<"The Value of base is : "<<base<<endl;
    }

};
class Derived:public Base
{
    public:
    int derived;
    void Display()
    {
        cout<<"The Value of base is : "<<base<<endl;
        cout<<"The Value of derived is : "<<derived<<endl;
    }

};
int main()
{
    Base *base_class_pointer;
    Base b1;
    base_class_pointer=&b1;

    Derived d1;
    base_class_pointer=&d1;//Pointing to base class pointer to derived classs object.

    //base_class_pointer->derived=3;Can't invoked through base_class_pointer to derived class object.
    base_class_pointer->base=3;
    base_class_pointer->Display();

    Derived d2;

    Derived *derived_class_pointer;
    derived_class_pointer=&d2;
    derived_class_pointer->base=10;
    derived_class_pointer->derived=2;
    derived_class_pointer->Display();
    return 0;
}