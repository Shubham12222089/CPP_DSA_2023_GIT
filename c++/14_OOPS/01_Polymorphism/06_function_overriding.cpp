#include<iostream>
using namespace std;

class base{
    public:
    void print(){
        cout<<"from base"<<endl;
    }
};

class Derived : public base{
    public:
    void print(){
        cout<<"From derived"<<endl;
    }
};
int main(){

    Derived d1;

    base* b1 = &d1; //b1 is a pointer of base class type which is pointing to the address of d1 object

    b1->print(); //i am trying to access by using pointer so we are using -> operator
    //we can't use dot(.) operator.
    //d1.print();
}

/*
    we have same function in base class as well as 
    derived class, when we call the function using
    the object of derived class , the function of 
    derived class is executed instead of the base class.

    when we class print() using d1, it overrides the 
    print() of the base class.

    it's runtime polymorphism because the function
    call is not resolved 

*/