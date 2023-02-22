#include<iostream>
using namespace std;
/*
Function- A collection of block of code, which can defined
once and can use for sevrel times.
*/
//Function prototype- provide assuarity for finding function.
int sum(int a, int b);
void g();
void myfun(string fname,int age);
int main()
{
    int num1,num2;
    cout<<"Enter a no."<<endl;
    cin>>num1;
    cout<<"Enter a no."<<endl;
    cin>>num2;
    //Actual parameter- num1,num2 are actual parameters.
    cout<<"The sum is :"<<sum(num1,num2)<<endl;
    g();
    myfun("Shiv",21);
    myfun("",19);
    myfun("Rahul",29);
    return 0;

}
int sum(int a, int b)
{
    //Formal Parameter-a,b are taking avlue from Actual parameter.
   int c=a+b;
   return c;
}
void g()
{
    cout<<"Good morning";
}
void myfun(string fname="Rohit",int age=23)
{
    cout<<fname<<" is "<<age<<" Years Old"<<endl;
}