#include<iostream>
using namespace std;
//Swapping of Private data variable
class Y;
class X
{
    int data;
    public:
    void setData(int value)
    {
        data =value;
    }
    void displayData()
    {
        cout<<data;
    }
    friend void exchange(X &o1,Y &o2);


};
class Y
{
    int num;
    public:
    void setData(int value)
    {
        num =value;
    }
    void displayData()
    {
        cout<<num<<endl;
    }
    friend void exchange(X &o1,Y &o2);

};
void exchange(X &o1,Y &o2)
{
    int temp=o1.data;
    o1.data=o2.num;
    o2.num=temp;
}

int main()
{
    X a1;
    a1.setData(2);

    Y b1;
    b1.setData(3);

    cout<<"The value of data before exchanging :"<<endl;
    a1.displayData();
    cout<<"The value of num before exchanging num:"<<endl;
    b1.displayData();

    exchange(a1,b1);

    cout<<"The value of data after exchanging :"<<endl;
    a1.displayData();
    cout<<"The value of num after exchanging num:"<<endl;
    b1.displayData();
    
    return 0;
    
}