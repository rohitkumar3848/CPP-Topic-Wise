#include<iostream>
#include<list>
using namespace std;
void display(list<int> &li)
{
    list<int>::iterator it;
    for(it=li.begin();it!=li.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;// List of length 0
    //Using list we input value in list
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_front(19);
    display(list1);
    list1.sort();
    display(list1);
    //Deleting element from list methods
    /*list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(3);
    display(list1);*/


    list<int> list2(3);//List of size 7
    //Using iterator we input value in list
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=7;
    iter++;
    *iter=22;
    iter++;
    *iter=23;
    iter++;
    display(list2);
    list1.merge(list2);
    display(list1);
    list1.sort();
   
    return 0;
}