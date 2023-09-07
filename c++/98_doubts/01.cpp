#include<iostream>
using namespace std;

void printstring(const char* str){
    for(int i=0;str[i] != '\0';i++){
        cout<<str[i];
    }

}
int main(){
    const char* mystring = "Hello world";
    printstring(mystring);
}