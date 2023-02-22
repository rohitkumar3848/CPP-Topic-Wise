#include<iostream>
using namespace std;
template <class t1=int,class t2=char>
class Check
{
    public:
    t1 data1;
    t2 data2;
    Check(t1 a,t2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<data1<<endl<<data2<<endl;
    }

};
int main()
{
    Check<> ch(1,2);
    ch.display();
    Check<char ,char > chk(1,'c');
    chk.display();
    return 0;
}