#include<iostream>
using namespace std;
/*inline function just a request to a compiler not a mandatory command
It is used when function is small and call several times to transfer
the control over the program from calling function to defining function.
It is not used with recursion,goto stament,static functin,loop,does not return.*/
inline int fun(int a, int b)
{
    return a+b;
}
/*Static variable-remains in memory until the program is terminated.
Create single copy even we have many objects.
Always start with 0, bcz its default value is 0.
Static Function-If we create a member function is static of 
a class as a static, which can acess only static data members.
Without object we can acess static data member functions.*/
void demo()
{
    static int count=0;
    cout<<count<<" ";//value is updated and will be carried to next function call.
    count++; 
}
int main()
{ 
    cout<<"sum is "<<fun(21,23)<<endl;
    for(int i=0; i<5;i++)
    {
        demo();
    }
    return 0;
}
