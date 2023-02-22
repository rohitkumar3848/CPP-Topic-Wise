#include<iostream>
using namespace std;
class Base1
{
    public:
    void greet()
    {
        cout<<"How are you?";
    }

};
class Base2
{
    public:
    void greet()
    {
        cout<<"kaise ho";
    }
};
class Derived : public Base1,public Base2
{
    // If we use the same method in class again in derived by
    //applying changes in method the derived object invoke its 
    // class method.
    int a;
    public:
    void greet()
    {
        Base1 :: greet();//Ambiguity resolation resolve.
    }

};
int main()
{
    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived d;
    d.greet();
    return 0;
}