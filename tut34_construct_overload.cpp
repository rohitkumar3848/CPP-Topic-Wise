#include<iostream>
using namespace std;
class Number
{
    int a,b;
    public:
    //Constructor Overloading
    Number()
    {
       a=0;
       b=0;
    }
    Number(int x, int y)
    {
       a=x;
       b=y;
    }
    Number(int x)
    {
       a=x;
       b=0;
    }
    void numberDisplay()
    {
        cout<<"The number are "<<a<<" and "<<b<<endl;
    }
};
int main()
{
    Number n1(1,2);
    Number n2(1);
    Number n3;
    n1.numberDisplay();
    n2.numberDisplay();
    n3.numberDisplay();
    return 0;
}