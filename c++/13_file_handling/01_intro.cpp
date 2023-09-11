#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;



// int main(){
//     ofstream onFile; 

//     onFile.open("file.txt");
//     //onFile.open("C:\\Users\\shubh\\OneDrive\\Desktop\\test.txt");//to create file on desktop;

//     onFile << "Printed in file."; //printing in the txt file.
//     cout << "File created successfully."<<endl;
//     onFile.close();

// }

// int main(){
//     ifstream inFile;
//     string str;
//     inFile.open("file.txt");
//     //to write
//     //onFile << "Printed in file";

//     //to read
//     // inFile >> str;
//     // cout<<str; -->it will print only single string

//     while(getline(inFile,str)){
//         cout<<str;
//     }

//     inFile.close(); 
// }

//taking input and printing from the file;
int main(){
    ofstream onFile;
    string str;
    onFile.open("file1.txt");
    for(int i=0;i<5;i++){
        cin>>str;

        onFile << str <<endl;
    }
    cout<<"Output is: "<<endl;
    onFile.close(); 
    ifstream inFile;
    inFile.open("file1.txt");
    while(getline(inFile,str)){
        cout<<str<<endl;
    }
    inFile.close();
}