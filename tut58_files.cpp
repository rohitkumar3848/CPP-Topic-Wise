#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//Using constructor
int main()
{
    string name="Rohit";
    //Connecting our file fout stream
    ofstream fout("tut58sample.txt");
    //Writing a string to a file.
    fout<<"My name is "+name;
    fout.close();

    ifstream fin("tut58sample.txt");
    string content;
    getline(fin,content);
    cout<<"The content of my file is: "<<content;
    fin.close();
    return 0;
}