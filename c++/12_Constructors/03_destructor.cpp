#include<iostream>
using namespace std;

//destructor: it is used to destroy the object of a class
//when the scope of object ends
/*
    It has the same name as the class and start with ~ (tilde)
    ** basically a destructor is the last function that is going to be 
    called before an object is destroyed.
*/

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

//we can only have one destructor in a class.
//A destructor cannot have parameters or return type.
//we cannot define destructors in structs
//we cannot overload or inherit destructor.