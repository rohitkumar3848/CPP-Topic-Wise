#include<iostream>
using namespace std;
int main()
{
    // Basic Example:
    int a=4;
    int *ptr=&a;
    *ptr=12;
    //We can change the value using pointer.
    cout<<"The value of a is : "<<*ptr<<endl;

    /*New Operator:It denotes a request for memory allocation for the 
     free Store.If sufficient memory is available, a new operator
     intialiazes the memory and return the adress of the newly 
     allocated and intialized memory to the pointer variable.
     Synrax-->
     pointer_variable= new data_type;*/
    int *p=new int(3);
    /*Delete Operator: its programmer responsibility dynamically 
    deallocated memory,programmers refers to delete operator for this.
    */
    /*delete p;
    Using this the value allocated by *p pointer
    which deallcated by delete operator and gave a garbage value.*/
    cout<<"The value of at adress  p is : "<<*p<<endl;

    int *arr=new int[3];
    arr[0]=5;
    *(arr+1)=6;
    arr[2]=7;
    //delete[] arr;
    cout<<"The value of arr[0] is : "<<arr[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr[1]<<endl;
    cout<<"The value of arr[2] is : "<<arr[2]<<endl;

    return 0;
}