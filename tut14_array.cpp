#include<iostream>
using namespace std;
int main()
{
    //Array- collection of fixed size similiar data type.
    int marks[5],i;
    // another way direct getting value in array
    // int marks[]={21,32,34,21,443,534}
    cout<<"Enter marks";
    for(i=0;i<=4;i++)
    {
        cin>>marks[i];
    }
    cout<<"marks are"<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<marks[i]<<endl;
    }
    //Pointers and Arrays
    int *p=marks;//no need of & this operator in array
    cout<<"The value marks[0] is"<<*p<<endl;
    cout<<"The value marks[1] is"<<*(p+1)<<endl;
    cout<<"The value marks[2] is"<<*(p+2)<<endl;
    cout<<"The value marks[3] is"<<*(p+3)<<endl;
    cout<<"The value marks[4] is"<<*(p+4)<<endl;
    return 0;

}