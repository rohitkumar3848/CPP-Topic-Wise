#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>//for exit function
using namespace std;
//Two files read simountaneously
int main()
{
    ifstream fin1,fin2;
    const int n=30;
    const int n1=30;
    char line[n];
    char line1[n1];
    fin1.open("country.txt");
    fin2.open("languages.txt");
    while(fin1.getline(line,n) && fin2.getline(line1,n1))
    {
        cout<<"Country is: "<<line<<endl;
        cout<<"Languages are : "<<line1<<endl;
    }
    fin1.close();
    fin2.close();
    return 0;
}