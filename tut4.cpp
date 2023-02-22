#include<iostream>
using namespace std;
int main()
{
    //Refrence variable
    float total =100;
    float &sum=total;
    cout<<total;
    cout<<endl<<sum;
    //Type Casting
    float a=2.3;
    int b=3;
    cout<<endl<<(float)b;
    cout<<endl<<float(b);
    
    cout<<endl<<int(a);
    cout<<endl<<(int)a;
    int c=int(a);
    cout<<endl<<b+int(a);
    cout<<endl<<c;
    return 0;
    


}
