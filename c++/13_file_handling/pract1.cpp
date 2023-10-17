#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with out stream
    // ofstream out("sample.txt");
    // //creating a name variable 
    // cout<<"enter your name: ";
    // string name;
    // cin>>name; //taking input
    // //writing a string to the file.
    // out<<"My name is "<<name;

    // out.close();

    //to read from the file;

    ifstream in("sample.txt");
    string content;
    //in>>content; //it will only print one word so use getline.
    getline(in, content);

    cout<<"The content of this file is -> "<<content<<endl;

    in.close();
}