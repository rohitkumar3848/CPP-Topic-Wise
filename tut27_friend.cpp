#include<iostream>
using namespace std;
//Friend function : It can acess the private data member variable pf class.
class Complex
{
    int a,b;
    public:
    //Below the line sumcomplex function can acess and and can do private things.
    friend Complex sumComplex(Complex o1, Complex o2);
    void setNumber(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void displayNumber(void)
    {
        cout<<"The Complex Number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex c1,c2,c3;
    c1.setNumber(1,2);
    c1.displayNumber();
    
    c2.setNumber(3,4);
    c2.displayNumber();
// here we used asignment operator instead of dot operator because the 
// sum complex is friend function.
    c3=sumComplex(c1,c2);
    c3.displayNumber();

    return 0;
}
/*  Properties of Friend Function-
1.Not in the scope of the class.
2.Since, it isnot in the scope of the class, 
it cannot be called from the object of that class.
c3.sumComplex-invalid
c3=sumComplex-valid
3.Can be invoked without the help of any object.
4.Usually contains the object as arguemnet.
5.can be declared inside public,private part of the class.
6. it cannot acess the members directly by their names and need 
object_name.member_name to acess the member.
*/