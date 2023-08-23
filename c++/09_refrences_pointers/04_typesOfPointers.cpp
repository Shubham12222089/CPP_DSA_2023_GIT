#include<iostream>
using namespace std;
//Null pointers: -pointer which is pointing to nothing.
// if we don't have the address to be assigned to a pointer, we
// can use Null.

// int main(){
//     //int *p; //containing garbage value
//     // int *p = NULL;
//     // cout<< p;


// }

// double pointers:- we can create a pointer that in
// turn may point to data or another pointer.

int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    cout<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

}