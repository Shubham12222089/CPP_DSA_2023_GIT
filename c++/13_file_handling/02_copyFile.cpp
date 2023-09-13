#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream inFile;
    ofstream onFile;

    char ch;

    inFile.open("file.txt");
    onFile.open("newfile.txt");

    while(inFile.get(ch)){//.get()-->getdata and store to ch
        onFile.put(ch);//it will print char by char.
    }

    inFile.close();
    onFile.close();
}