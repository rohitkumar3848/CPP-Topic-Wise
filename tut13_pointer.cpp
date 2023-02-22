#include<iostream>
using namespace std;
int main()
{
    /*Pointer-a special variable store the adress of another 
    data type*/
    int a=3;
    int *b=&a;
    // Adress of Operator-adress
    cout<<"The adress of a is"<<&a<<endl;
    cout<<"The adress of a is"<<b<<endl;
    //Dereference operator-value
    cout<<"The value of a is"<<*b<<endl;
    cout<<"The value of a is"<<a<<endl;
    //pointer to pointer
    int **c=&b;
    cout<<"The adress of b is"<<&b<<endl;
    cout<<"The adress of b is"<<c<<endl;
    cout<<"The value at adress of c is"<<*c<<endl;
    // work as b so print adress of a
    cout<<"The value of adress of c of value of c is"<<**c<<endl;
    // work as a so print its value
    return 0;
    
}