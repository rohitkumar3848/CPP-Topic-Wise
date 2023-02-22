#include<iostream>
using namespace std;
/*Multilevel Inheritence:
Student is inherited by Marks and Marks is inherited by Result.
A-->B-->C-->
*/
class Student
{ 
    protected:
    int rollNo;
    public:
    void get_rollNo(int roll);
    void display_rollNo();
};
void Student ::get_rollNo(int roll)
{
    rollNo=roll;
}
void Student ::display_rollNo()
{
    cout<<"The roll no. is"<<rollNo<<endl;
}
class Marks : public Student 
{ 
    protected:
    float Physics,Chemistry;
    public:
    void get_marks(float p,float c);
    void display_marks();
};
void Marks ::get_marks(float p,float c)
{
    Physics=p;
    Chemistry=c;
}
void Marks ::display_marks()
{
    cout<<"The marks in Chemistry is :"<<Chemistry<<endl;
    cout<<"The marks in Physics is :"<<Physics<<endl;
}
class Result :public Marks
{
    protected:
    float per;
    public:
    void Display()
    {
        display_rollNo();
        display_marks();
        per=(Physics+Chemistry)/2;
        cout<<"The percentage is "<<per<<"%"<<endl;
    }
};
int main()
{   
    Result Rohit;
    Rohit.get_rollNo(10);
    Rohit.get_marks(91.0,89.0);
    Rohit.Display();
    return 0;
}
