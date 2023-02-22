#include<iostream>
using namespace std;
//Function overloading-use the same thing for the different purpose.
int area(int a)
{
    return a*a;//square
}
int area(int a,int b)
{
    return a*b;//Rectangle
}
int main()
{
    cout<<"The area of square is : "<<area(5)<<endl;
    cout<<"The area of rectangle is : "<<area(5,9)<<endl;
    return 0;
}
`