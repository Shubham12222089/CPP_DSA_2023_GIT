/*
    A function is used to reduce the code redudancy, as well to save memory space.
    As invoked, a bunch of tasks are performed(matching arguments, matching return[happens internally]),

    but when function definition consist of hardly one or two statements,
    then this bunch of tasks appears to me time consuming, so to fix this
    we use the concept of inline functions.

    when a function is declared inline, the "Function body" is replicated at function.

    Inline Function is a function that is expanded inline by the compiler when it is invoked. 
    During function call, a lot of overhead tasks are performed like saving registers, 
    pushing arguments to the stack, and returning to the calling function. These overheads are 
    time-consuming and inefficient for small-size functions. In C++, the inline function is used 
    to solve these overhead costs. It is expanded in line by the compiler when it is invoked, 
    thus overhead cost is avoided. A keyword known as ‘inline‘ is used before the function declaration. 
*/
#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a+b;
}
int main(){
    cout<<"Sum: "<<add(2, 3);
}