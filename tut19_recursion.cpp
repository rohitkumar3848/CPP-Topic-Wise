#include<iostream>
using namespace std;
//Recursion- A situation where a function call itself.
//Ex- Factorial of number:
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
//Ex- Fabnacci series 
int fab(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return fab(n-2)*fab(n-1);
}
int main()
{
    int n ;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Factorial of "<<n<<" is :"<<fact(n)<<endl;
    cout<<"The term at fabonacci series at sequence is :"<<fab(n);
    return 0;
}