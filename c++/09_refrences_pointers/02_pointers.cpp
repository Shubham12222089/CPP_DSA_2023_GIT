#include<iostream>
using namespace std;

int main(){
    // int a=5;
    // cout<<&a<<endl;

    int var = 10;

    int *ptr= &var;

    double var2=10.6;
    double *ptr2 = &var2;

    cout<< &var<<endl; //address of var
    cout<< ptr<<endl; //address of var
    cout<< *ptr<<endl; //derefrencing the pointer
    cout<< sizeof(ptr) <<endl;
    cout<< sizeof(ptr2) <<endl;
}