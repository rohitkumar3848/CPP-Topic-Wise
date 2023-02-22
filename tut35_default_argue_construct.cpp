#include<iostream>
using namespace std;
class Simple
{
    int data1,data2,data3;
    public:
    Simple(int x=1,int y=2, int z=3)
    {
       data1=x;
       data2=y;
       data3=z;
    }
    void simpleDisplay()
    {
        cout<<"The number are "<<data1<<", "<<data2<<" and "<<data3<<endl;
    }
};
int main()
{
    Simple n1(11,22);
    Simple n2(101);
    Simple n3;
    n1.simpleDisplay();
    n2.simpleDisplay();
    n3.simpleDisplay();
    return 0;
}