#include<iostream>
using namespace std;
/*Destructor::Never take an arguement nor return type.
Special member function that works justr opposite to constructor.
Unlike constructor for intializing object but destructor for destroy
the object.
use tilde symbol no return type, no parameter, match with class name.
Releasing memory of the objects.*/
int x=0;
class Number
{
    public:
    Number()
    {
        x++;
        cout<<"This is the time when constructor is called for object"<<x<<endl;
    }
    ~Number()
    {
       cout<<"This is the time when destrucor is called for object"<<x<<endl;
        x--;
    }
};
int main()
{
    cout<<"We are in main function" <<endl;
    cout<<"Creating first constructor "<<endl;
    Number n1;
    {
        cout<<"Entering the block "<<endl;
        Number n2,n3;
        cout<<"Creating the two more objects in the block "<<endl;
        cout<<"Exiting  the block "<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}