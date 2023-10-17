#include<iostream>
#include<fstream>
using namespace std;
// int main(){
//     // ofstream out;
//     // out.open("file1.txt");
//     // string str;
//     // cout<<"enter the text: ";
//     // getline(cin,str);
//     // out<<str;
//     // out.close();
// //-------------program to count number of lines in a file-----------------------------
//     // ifstream in;
//     // string st;
//     // in.open("file.txt");
//     // int temp=0;
//     // while(in.eof()==0){
//     //     getline(in,st);
//     //     temp+=1;
//     // }
//     // cout<<"Number of lines are : "<<temp;
//     // in.close();


// }

//copy text to another file
int main(){
    ifstream in;
    ofstream out;
    char ch;
    in.open("file1.txt");
    out.open("file.txt");

    while(in.get(ch)){
        out.put(ch);
    }

    in.close();
    out.close();
    
}