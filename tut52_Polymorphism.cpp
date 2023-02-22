#include<iostream>
using namespace std;
/*Polymorsphism: One name Multiple form.
E.g-Functional overloading,Operator overloading,Virtual Functions.
Types:
1.Complietime/Static/(Early Binding) Polymorphism:An object bound its function call at the 
    complie time.Allocate memory at complie time.
    Ex-Functional overloading,Operator overloading
2.Runtime/Dynamic(Late Binding) Polymorphism:It defers the linking of a function call to
    a object at the run time.Allocate memory at Run time.
    Ex-Virtual Functions.
*/
class A
{
    public:
    A()
    {
        cout<<"A is called"<<endl;
    }
    void show()
    {
        cout<<"Base"<<endl;
    }
};
class B:  public A
{
    public:
    B()
    {
        cout<<"B is called"<<endl;
    }
    void show()
    {
        cout<<"Derived"<<endl;
    }
};
int main()
{
    B d;
    d.show();
    d.A::show();
    return 0;
}