#include<iostream>
using namespace std;
class Base
{
    protected:
    int a=10;
    private:
    int b;
    public:
    int c;

};
/*
                  Public Derivation  Private Derivation  Protected Derivation
1.Private Member:   Not Inherited       Not Inherited      Not Inherited
2.Protected Member:  Protected           Private            Protected
3.Public Member:      Public             Private            Protected
*/
class Derived : protected Base
{   //public:it show output 10 for public acess modifier but for
    //private it show error.
    public:
    void show()
    {
       
        cout<<a<<endl;// It can't acess outside of its class unless
        // with the help of friend function.
        //Protected and private same, difference is that the
        //protected member of class acessible for derived class.
    }
};
int main()
{
    Derived d;
    /*cout<<d.a;it throws error bcz we can't acess the protected 
    member of derived class throw object.
    we can acess by member function.*/
    d.show();
    return 0;
}