#include<iostream>
using namespace std;
/*
Virtual Function: 
     1.It is memeber function in the base class  and declared
     using virtual keyword that you redefine in derived class.
     2.It is used to perform dynamic linkage oe late binding on the function.
     3.There is neccessity to used single pointer to refer all objects
        of different classes. So,we created the pointer to the base class
        that refers to all derived class objects.But,when base class pointer
        contain the adress of derived class object, always execute the base class
        function.This issue can be resolved by using Virtual Function.
     4. Can't be static members and acessed through object pointers.
     5. Thay can be friend of another clas.It must be defined in base class
        even through it not used.
     6. The prototype of virtal functions of base and derieved class must be same.
     7. We can't have virtual constructor but we can have virtual desrtuctor.
     8. If a virtual function is defined in base class, there is no 
        necessity to redefining virtual function in derived class if the 
        same function is not found.
*/
class Base
{
    public:
    int base=1;
    virtual void Display()
    {
        cout<<"1.The Value of base is : "<<base<<endl;
    }

};
class Derived:public Base
{
    public:
    int derived=2;
    void Display()
    {
        cout<<"1.The Value of base is : "<<base<<endl;
        cout<<"2.The Value of derived is : "<<derived<<endl;
    }

};
int main()
{
    Base *base_class_pointer;
    Base b1;
    Derived d1;
    base_class_pointer=&d1;
    base_class_pointer->Display();
    return 0;
}