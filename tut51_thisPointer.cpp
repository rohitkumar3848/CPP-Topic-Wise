#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A& setData(int a)
    //void setData(int a)
    {
        this->a=a;
        return *this;
    }
    void getData()
    {
        cout<<"The value of a is : "<<a;
    }
};
int main()
{
    /* this Pointer-> this is keyword which is a pointer which 
    points to the object which invokes the member function.
    Usually used when the local variable have same name as those 
    of the class member.*/
    A a;
    a.setData(1).getData();
    //a.setData(1);
    //.getData();
    return 0;
}