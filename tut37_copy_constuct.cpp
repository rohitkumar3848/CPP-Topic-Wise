#include<iostream>
using namespace std;
/*Copy Constructor: It is used to initialize member of a newly 
created object by copying of member of an already existing object.
It is takes reference of an object  of same class as an argumennt.
Or we can say create the copy of an existing object of an class.
*/
class Number
{
    int num;
    public:
    Number()
    {
        num=0;
    }
    Number(int x)
    {
        num=x;
    }
    //Copy constructor- when no Copy consturctor then the 
    // supplies own copy consturctor complier.
    Number( Number &obj)
    {
        cout<<"Copy constructor called : "<<endl;
        num=obj.num;
    }
    void displayNum()
    {
        cout<<"The num is : "<<num<<endl;
    }
};
int main()
{
    Number x,y(1);
    x.displayNum();
    y.displayNum();
    //Copy Constructor invoked 
    Number y1(y);
    y1.displayNum();
    //Copy Constructor  not invoked
    //y2=y; not work
    //Copy Constructor invoked
    Number y3(y);
    y3.displayNum();
    return 0;
}