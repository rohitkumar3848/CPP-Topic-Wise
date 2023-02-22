#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> marksMap;
    marksMap["Rohit"]=93;
    marksMap["Sohan"]=67;
    marksMap["Mohan"]=98;
    marksMap.insert({{"Kuku",90},{"Muku",98}});
    map<string,int>::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"marksMap size is : "<<marksMap.size()<<endl;
    cout<<"marksMap max size is : "<<marksMap.max_size()<<endl;
    cout<<"marksMap is empty return : "<<marksMap.empty()<<endl;
    return 0;
}