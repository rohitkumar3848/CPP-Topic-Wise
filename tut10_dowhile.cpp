#include<iostream>
using namespace std;
int main()
{
    //while loop
    int i=1,num;
    cout<<"Enter a no. for which range you want to search"<<endl;
    cin>>num;
    cout<<"The even no. are from range 1 to"<<num<<endl;
    
    do
    {
        if(i%2==0)
        {
            cout<<"yes"<<i<<"is a even no."<<endl;
        }
        else{
            cout<<"no"<<i<<"it is not a even no."<<endl;
        }
        i++;
    }while(i<=num);
    return 0;
}