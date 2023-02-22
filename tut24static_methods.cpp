#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    public:
    void setData(void)
    {
        cout<<"Enter  a id :"<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"The id of Employee is"<<id <<"and the Employee no. is"<<count<<endl;       
    }
    static void getCount(void)
    {
        cout<<"The value of count is"<<count<<endl;
    }
};
int Employee :: count;//Default value is 0
int main()
{
    Employee harry,rohan;
    harry.setData();
    harry.getData();
    Employee ::getCount();

    rohan.setData();
    rohan.getData();
    Employee ::getCount();

    return 0;
}