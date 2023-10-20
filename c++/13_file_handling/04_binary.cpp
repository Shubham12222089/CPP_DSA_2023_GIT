#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream out("test.bin",ios::binary);
    // int p = 1234;
    // int q = 5678;

    // out.write((char*) &p,sizeof(p));
    // out.write((char*) &q,sizeof(q));

    ifstream file("test.bin", ios::binary);
    int p;
    cout<<"value of p before : "<< p <<endl;
    file.read((char*) &p,sizeof(p));

    cout<< "value of p after : "<<p<<endl;


    file.close();
}