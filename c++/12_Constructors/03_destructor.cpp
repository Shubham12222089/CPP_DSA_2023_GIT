#include<iostream>
using namespace std;

//destructor: it is used to destroy the object of a class
//when the scope of object ends

class Person{
    public:
    Person(){
        cout<<"Constructor called"<<endl;
    }

    ~Person(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Person p1, p2;
}