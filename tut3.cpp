#include <iostream>//system header file
//#include<this.h>//user defind hader file
using namespace std;
 int glo=16;
 void fun()
 { 
    int glo=15;
    // if we are not declaring glo variable then it take garbage value ar default variable
    cout<<"\n"<<::glo;
    cout<<"\n"<<glo;
 }
 int main()
 {
    // local variable take preference over global variable
    cout<<"The value of glo is: \n"<<glo;
    fun();
 }