#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// Using open mode
int main()
{
    ofstream fout;
    fout.open("tut59_sample.txt");
    fout<<"Hello my name is Rohit kumar";
    fout.close();
    ifstream fin;
    string str;
    fin.open("tut59_sample.txt");
    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str<<endl;
    }
    fin.close();
    return 0;
}