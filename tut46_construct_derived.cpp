#include<iostream>
using namespace std;
/*
    Constructor in derived class=
    1.If base class constructor doest not have any arguements, there
      is no need of any constructor in derived class.
    2.But if there are one or more arguements in the base class
      constructor,derived class need to pass arguements to the base
      class constructor.
    3.If both base class and derived class have constructors,base class
      constructor is executed first.
    4.In multiple inheritence, base class are constructed in the order
      in which they appear in the class declaration.
    5.in multilevel inheritence, the constructor are executed in order
      of inheritence.
    6.The constructor of virtual base classes are invoked first before
       an non-virtual base class.If there multiple virtual base class
       then they invoked in their order as declared.

    Case1:
    class B: public A
    {
      //Order of execution of constructor->first A(),then B
    }

    Case2:
    class C: public B,public A
    {
      //Order of execution of constructor->first B(),then A,then() C
    }

    Case3:
    class C: public B, virtual public A
    {
      //Order of execution of constructor->first A(),then B,then() C
    }
*/
class Base1
{
  int data1;
  public:
  Base1(int i)
  {
    data1=i;
    cout<<"The Base1 classs constructor called"<<endl;
  }
  void displayBase1()
  {
    cout<<"The Value of data1 is : "<<data1<<endl;
  }
};
class Base2
{
  int data2;
  public:
  Base2(int j)
  {
    data2=j;
    cout<<"The Base2 classs constructor called"<<endl;
  }
  void displayBase2()
  {
    cout<<"The Value of data2 is : "<<data2<<endl;
  }
};
class Derived:public Base1,virtual public Base2
//Virtual Base class constuctor invoked first.
{
  int derived1,derived2;
  public:
  Derived(int a,int b,int c,int d):Base1(a),Base2(b)
  {
    derived1=c;
    derived2=d;
    cout<<"The Derived classs constructor called"<<endl;
  }
  void displayDerived()
  {
    cout<<"The Value of derived1 is : "<<derived1<<endl;
    cout<<"The Value of derived2 is : "<<derived2<<endl;
  }
};
int main()
{
    Derived d1(1,2,3,4);
    d1.displayBase1();
    d1.displayBase2();
    d1.displayDerived();
    return 0;
}