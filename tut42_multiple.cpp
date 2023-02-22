#include<iostream>
using namespace std;
class Base1
{ 
    protected:
    int a;
    public:
    void get_base1(int x)
    {
        a=x;
    }
};
class Base2
{ 
    protected:
    int b;
    public:
    void get_base2(int y)
    {
        b=y;
    }
};
class Derived :public Base1,public Base2
{ 
    public:
    void Display()
    {
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The Sum of a and b is :"<<a+b<<endl;
    }
};
int main()
{
    Derived Rohit;
    Rohit.get_base1(10);
    Rohit.get_base2(20);
    Rohit.Display();
    return 0;
}
