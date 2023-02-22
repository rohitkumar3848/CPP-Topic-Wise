#include<iostream>
using namespace std;
int main()
{
    // for loop
    int num;
    cout<<"Enter a no. for which range you want to search"<<endl;
    cin>>num;
    cout<<"The even no. are from range 1 to"<<num<<endl;
    for(int i=1; i<=num; i++)
    {
         if(i%2==0)
        {
            cout<<"yes"<<i<<"is a even no."<<endl;
        }
        else{
            cout<<"no"<<i<<"it is not a even no."<<endl;
        }
    }
    return 0;
}