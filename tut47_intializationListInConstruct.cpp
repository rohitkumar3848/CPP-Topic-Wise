#include<iostream>
using namespace std;
//Intialization another way of data variable in constructor.
class Test
{
    int a;
    int b;
    public:
    //Test(int i,int j):a(i),b(j)->a=1,b=2
    //Test(int i,int j):b(i),a(j)->a=2,b=1
    //Test(int i,int j):a(i+1),b(a+j)->a=2,b=4
    //Test(int i,int j):b(j),a(i+b)->a=garbage value,b=2bcz a will be intialized first.
    Test(int i,int j):a(i),b(j)
    {
        cout<<"Constructor executed"<<endl;
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
    }
};
int main()
{
    Test t(1,2);
    return 0;
}