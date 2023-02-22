#include<iostream>
using namespace std;
class Shop
{
    private:
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initCounter(void)
    {
        counter=0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void Shop :: setPrice(void)
{
    cout<<"Enter a ID of your item no"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter a Price of your item no"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void Shop :: displayPrice(void)
{
    for(int i=0; i<counter;i++)
    {
        cout<<"The price of Your item with Id is "<<itemid[i]<<"is"<<itemprice[i]<<endl;
    }
}
int main()
{
    Shop Butter;
    Butter.initCounter();
    Butter.setPrice();
    Butter.setPrice();
    Butter.setPrice();
    Butter.setPrice();
    Butter.displayPrice();
    return 0;
}