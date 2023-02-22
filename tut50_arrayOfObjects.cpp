#include<iostream>
using namespace std;
class shopItem
{
    int id;
    float price;
    public:
    void setData(int i, float j)
    {
        id=i;
        price=j;
    }
    void getData()
    {
        cout<<"The Id of the item is : "<<id<<endl;
        cout<<"The Price of the item is : "<<price<<endl;
    }
};
int main()
{
    int size=2;
    shopItem *ptr= new shopItem[size];
    shopItem *ptrTemp=ptr;
    int p,i;
    float q;
    for(i=0;i<=size;i++)
    {
        cout<<"Enter the Id and Price of item : "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0;i<=size;i++)
    {
        cout<<"Item no. is  : "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;   
    }
    return 0;
}