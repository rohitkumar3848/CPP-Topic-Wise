#include<iostream>
using namespace std;
/*Virtual class: Primarily used during multiple inheritence.
To prevent multiple instances of the given class appearing in an 
inheritence heiarchy when using multiple inheritence
,which later causes ambuiguity.
This is the reason we used virtual class.
*/
class Student
{
    protected:
    int rollNo;
    public:
    void get_RollNo(int Num)
    {
        rollNo=Num;
    }
    void display_RollNo()
    {
        cout<<"Your Roll No. is :"<<rollNo<<endl;
    }
};

class Test: virtual public Student
{
    protected:
    float maths,physics,chemistry;
    public:
    void get_Marks(float m,float p,float c)
    {
        maths=m;
        physics=p;
        chemistry=c;
    }
    void display_marks()
    {
        cout<<"Your marks in Maths is :"<<maths<<endl;
        cout<<"Your marks in Chemistry is :"<<chemistry<<endl;
        cout<<"Your marks in Physics is :"<<physics<<endl;
    }
};
class Sport: virtual public Student
{
    protected:
    float physical;
    public:
    void get_Sport(float phy)
    {
        physical=phy;
    }
    void display_Sport()
    {
        cout<<"Your Physical No. is :"<<physical<<endl;
    }
    
};
class Result:public Test, public Sport
{ 
    protected:
    float result;
    public:
    void displayResult()
    {
        result=(maths+chemistry+physics+physical)/4;
        display_RollNo();
        display_marks();
        display_Sport();
        cout<<"The result is "<<result<<"%"<<endl;
    }

};
int main()
{
    Result Rohit;
    Rohit.get_RollNo(1);
    Rohit.get_Marks(93,89,80);
    Rohit.get_Sport(82);
    Rohit.displayResult();
    return 0;
}