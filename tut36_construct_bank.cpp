#include<iostream>
using namespace std;
class Bank
{
    int Principal;
    int Year;
    float InterestRate;
    float ReturnAmount;
    public:
   //need for intialization and s bcz it is saves error
    Bank(){}
    Bank(int p,float t,float r);//Interest rate like 0.04
    Bank(int p,float t,int R);//Interest rate like 4
    void showData()
    {
        cout<<endl;
        cout<<"For principal"<<Principal<<" Rupees For"
            <<Year<<" years "<<"year amount would be "<<ReturnAmount
            <<"Rupees"<<endl;
    }
};
Bank ::Bank(int p, float t,float r)
{
    Principal=p;
    Year=t;
    InterestRate=r;
    ReturnAmount=Principal;
    for(int i=0; i<t ; i++)
    {
         ReturnAmount=ReturnAmount*(1+InterestRate);
    }
}
Bank ::Bank(int p, float t,int R)
{
    Principal=p;
    Year=t;
    InterestRate=float(R)/100;
    ReturnAmount=Principal;
    for(int i=0; i<t ; i++)
    {
        ReturnAmount= ReturnAmount*(1+InterestRate);
    }
}
int main()
{
    Bank b1,b2;
    int p,t,R;
    float r;
    cout<<"Enter the principal amount";
    cin>>p;
    cout<<"Enter the interest rate(in decimal)"<<endl;
    cin>>r;
    cout<<"Enter the Time(in years)"<<endl;
    cin>>t;
    b1=Bank(p,t,r);
    b1.showData();
    cout<<"Enter the principal amount";
    cin>>p;
    cout<<"Enter the interest rate(in %)"<<endl;
    cin>>R;
    cout<<"Enter the Time(in years)"<<endl;
    cin>>t;
    b2=Bank(p,t,R);
    b2.showData();
    return 0;

}