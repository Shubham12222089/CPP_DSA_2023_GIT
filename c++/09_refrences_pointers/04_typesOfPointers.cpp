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

// int main(){
//     int a = 5;
//     int *p = &a;
//     int **q = &p;

//     cout<<&a<<endl;
//     cout<<p<<endl;
//     cout<<*q<<endl;
//     cout<<endl;
//     cout<<&p<<endl;
//     cout<<q<<endl;
//     cout<<endl;
//     cout<<a<<endl;
//     cout<<*p<<endl;
//     cout<<**q<<endl;

// }

/*
3.Void pointer - void pointer can hold address of any type.
It is a generic pointer. it has no associated type with it.
void pointers cannot be dereferenced, it can be done
using typecasting the void pointer.
*/

// int main(){

//     // double i = 5;
//     // void *ptr;
// }

/*
    4.wild pointers - when a pointer is declared but not 
    initailized, they point at a random momory location.
*/
// int mai(){
//     int a = 5;
//     int *p;

//     cout<<*p<<endl;
// }

/*
    5. Dangling pointers - a pointer pointing towards a memory location
    that has been deleted.
    basically ek aisa pinter jo ki ek variable ko point karta hai
    jo ki delete ho chuki hai.

*/