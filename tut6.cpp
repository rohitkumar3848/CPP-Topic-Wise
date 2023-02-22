#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age<18 && age>0)
    {
        cout<<"You can't come to party";
    }
    else if(age=18)
    {
        cout<<"You can come to party";
    }
    else
    {
        cout<<"You cant come to party";
    }
    return 0;
}