#include<iostream>
using namespace std;
/*
Class Parameter with Multiple Parameter
Syntax->    template<class t1,class t2>
            class nameofclass
            {
                //body
            }
*/
template <class t1,class t2>
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
    Check<int,int> ch(1,2);
    ch.display();
    Check<int ,char > chk(1,'c');
    chk.display();
    return 0;
}