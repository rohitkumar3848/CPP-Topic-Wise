#include<iostream>
using namespace std;
/*Inheritence- Reusuable class and add additional features,
its saves memory and money.
We can use the properties of an existing class(Base/parent class) by inheriting from
it and make new class(Derived class).
Types:Single,Multiple,Heerarchical,Multilevel,Hybrid.
Single Inheritence:A derived class with only one Base class.
Multiple Inheritence:A derived class with more than one Base class.
Hierarchical Inheritence:Several Derived class from single base class.
Multi Level Inheritence:Deriving a class from a already deriving class.

Hybrid Inheritence:Combo of Multiple and Multilevel Inheritence.
A class is derived from two classes in Mulltiple Inheritence.*/
//Base class
class Employee
{
    int eid;
    public:
    float salary;
    Employee(){}//We made this when we made derieved class then 
    //base class constructor automatically invoked.
    Employee(int id)
    {
        eid=id;
        salary=30.0;
    }
    void show()
    {
        cout<<eid<<endl;
    }
};
/*Visiblity Mode:These are aceess modifiers.
1.By deafult the mode is private.
2.We can't inheritred the private member of base class.
3.Public Mode:Public member of the base class becomes the public
member of derived class. 
3.Private Mode:Public member of the base class becomes the private
member of derived class.

*/
class Programmer :public Employee
{
    public:
    int eid;
    Programmer(int id)
    {
        eid=id;
    }
    int languageCode=9;
    void getdata()
    {
        cout<<eid<<endl;
    }


};
int main()
{

    Employee Rohit(1),Harry(2);
    cout<<Rohit.salary<<endl;
    Rohit.show();
    cout<<Harry.salary<<endl;
    Harry.show();
    Programmer p(1);
    cout<<p.languageCode<<endl;
    p.getdata();
    return 0;
}