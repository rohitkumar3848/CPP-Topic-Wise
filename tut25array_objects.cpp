#include<iostream>
using namespace std;
//Array of objects.
class Employee
{
    int eid;
    string ename;
    public:
    void getData(void)
    {
        cout<<"Enter the ID  of Employee"<<endl;
        cin>>eid;
        cout<<"Enter the name  of Employee"<<endl;
        cin>>ename;
    }
    void displayData(void)
    {
        cout<<"The Id of Employee is"<<eid<<endl;
        cout<<"The name of the Employee is"<<ename<<endl;
    }
};
int main()
{
    Employee emp[5];
    for(int i=0; i<=2; i++)
    {
        emp[i].getData();
        emp[i].displayData();
    }
    return 0;
}