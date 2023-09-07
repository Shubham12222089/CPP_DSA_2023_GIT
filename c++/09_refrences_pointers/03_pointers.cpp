#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = 0;

    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int num = 5;
    int a = num;
    cout<<"before: "<<a<<endl;
    a++;
    cout<<"after: "<<a<<endl;
    int *p = &num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"after: "<<num<<endl;

    //copy a pointer.
    int *q = p;
    cout<<p<<" & "<<q<<endl;

    // int i=5;
    // int *p=&i;

    // // cout<< ++(*p) <<endl;
    // cout<<*p<<endl;
    // *p=*p+1;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // p=p+1;
    // cout<<p<<endl;


}