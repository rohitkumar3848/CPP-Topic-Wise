#include<iostream>
using namespace std;
//STRUCTURE- Collection of disimilliar datatype into a one place.
/* it allocate memory by combining all datatype size in bytes
It's Limitation:Member are public, and methods can't define inside structure.
*/
typedef struct Employee// or struct Employee
    {
        int eid;//4
        char edesignation;//1
        float esallary;//4
        // Now they can allocate 9 byte memmory no ovveride occur
    } ep;// nothing
int main()
{
    ep rohit;//struct Employee rohit; or you can create more employee
    rohit.eid=101;
    rohit.edesignation='H';
    rohit.esallary=50.0000;
    cout<<rohit.eid<<endl;
    cout<<rohit.edesignation<<endl;
    cout<<rohit.esallary<<endl;
    //Enum-user defined data type that contain fixed size constants
    enum Meal{breakfast,lunch,dinner};
    Meal m1=lunch;
    cout<<(m1==1);

    return 0;   

}
/* Union same Structure but it saves memory and use effectively.
 It allocate memory for one data type variable at a time after
 intialising another data variable it ovveride.*/