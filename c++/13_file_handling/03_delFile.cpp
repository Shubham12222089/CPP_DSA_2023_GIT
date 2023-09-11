#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //remove("file1.txt");

    int val=remove("file1.txt");
    if(val==0){
        cout<<"File is deleted"<<endl;
    }
    else{
        cout<<"File is not deleted.";
    }

}