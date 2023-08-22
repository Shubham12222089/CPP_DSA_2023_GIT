/*
    A function is used to reduce the code redudancy, as well to save memory space.
    As invoked, a bunch of tasks are performed(matching arguments, matching return[happens internally]),

    but when function definition consist of hardly one or two statements,
    then this bunch of tasks appears to me time consuming, so to fix this
    we use the concept of inline functions.

    when a function is declared inline, the "Function body" is replicated at function.
*/
#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a+b;
}
int main(){
    cout<<"Sum: "<<add(2, 3);
}