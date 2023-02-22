#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your age";
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
        break;
    case 3:
    cout<<"You are 3"<<endl;
        break;
    case 8:
    cout<<"You are 8"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}