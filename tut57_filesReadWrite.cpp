#include<iostream>
#include<fstream>
using namespace std;
/*The useful classes for working with files in C++ are:
!.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase

In order work with files we have to open it.Two ways to open it:
1.using the constructor
2.using the member function open()of the class.
*/
int main()
{
    //string str="Rohit Kumar";
    string str2;
    //Opening files using constructor and writing it
    //ofstream out("tut57samplefile.txt");//Write operation
    //out<<str;//Write to file.

    //Opening files using constructor and reading it
    ifstream in("tut57samplefile.txt");//read operation
    //in>>str2;//Read from file.
    //getline(in,str2);
    cout<<str2;
    return 0;
}