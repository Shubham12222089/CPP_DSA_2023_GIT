#include<iostream>
using namespace std;



void myfunc(){ //creating/declaring a function.
    cout<<"This is a function.";//defining a function.
}
void myfunc1(){
    myfunc();
}
int main(){
    myfunc1(); //calling a function.
}