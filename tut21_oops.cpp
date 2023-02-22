#include<iostream>
using namespace std;
//Class: A template to create an objects
class Employee
{
    //Acess Modifiers:Public,Private,Protected.
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata()
    {
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
};
//Function Define outside the class.
void Employee :: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    //Object:An object instance of class, run time entity when
    // it instained the memory is allocated.
    Employee Rohit;
    //Rohit.a=3; We can't use object with private variables.
    Rohit.d=21;
    Rohit.e=20;
    Rohit.setdata(1,2,4);
    Rohit.getdata();
    return 0;

}
//OOPs:
//Encapsulation:Wrapping of data variable and member function in single unit.
//Data Abstraction:Hiding Unwanted information from the user.
//Inheritence:The derived class obtain the all properties of its base class.
//Polymorphism:Abilty to displayed a mesage into various forms.
//Data Binding:Code which will excute not known until the program run.
//Message Passing:Exchange messages between objects.