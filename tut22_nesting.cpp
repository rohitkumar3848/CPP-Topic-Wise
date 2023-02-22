#include<iostream>
using namespace std;
class binary
{
    //By default class member always private
   private:
   string s;
   // Function call privately only the class member function can
   // acess this private function, through object we can't acessed.
   void chck_binary(void);
   public:
   void read(void);
   //void chck_binary(void);
   void ones_compliment(void);
   void display(void);
};
void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary :: chck_binary(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"Incorrect binary number found"<<endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
{
    chck_binary();
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i) =='0')
        {
            s.at(i)='1';   
        }
        else
        {
            s.at(i)='0'; 
        }
    }
}
void binary :: display(void)
{
    cout<<"Display your binary no.";
    for(int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    //b.chck_binary();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}