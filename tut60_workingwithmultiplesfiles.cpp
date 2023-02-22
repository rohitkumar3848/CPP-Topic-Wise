#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//Working with multiple files
int main()
{
    ofstream fout;
    fout.open("country.txt");
    fout<<"INDIA"<<endl;
    fout<<"NEPAL"<<endl;
    fout<<"RUSSIA"<<endl;
    fout<<"BHUTAN"<<endl;
    fout<<"CHINA"<<endl;
    fout.close();
    fout.open("languages.txt");
    fout<<"HINDI"<<endl;
    fout<<"URDU"<<endl;
    fout<<"ENGLISH"<<endl;
    fout<<"SANSKRIRIT"<<endl;
    fout<<"CHINEASE"<<endl;
    fout.close();

    ifstream fin;
    const int n=30;
    char line[n];
    fin.open("country.txt");
    cout<<"The country are: "<<endl;
    while(fin.eof()==0)
    {
        fin.getline(line,n);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("languages.txt");
    cout<<"The languages are: "<<endl;
    while(fin.eof()==0)
    {
        fin.getline(line,n);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}