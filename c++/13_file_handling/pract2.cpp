#include<iostream>
#include<fstream>
using namespace std;

// int main(){
//     // ofstream out;
//     // out.open("sample2.txt");
//     // out<<"Shubham here \n";
//     // out<<"me also";

//     // out.close();

//     ifstream in;
//     string st;
//     in.open("sample2.txt");
//     //in>>st;
//     // getline(in,st);
//     // cout<<st;

//     while(in.eof()==0){//eof-->end of file.
//         getline(in,st);
//         cout<<st<<endl;
//     }

//     in.close();
// }

int main(){
    ofstream out;
    out.open("sample2.txt");
    string str;
    getline(cin,str);
    out<<str;
    out.close();
}