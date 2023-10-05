#include<iostream>
using namespace std;

/*VIRTUAL FUNCTION*/
//a virtual function is a member function in the
//base class that we expect to redefine in derived class.
// a virtual func is used in base class in order to insure 
// that the funcn is overriden.

//This especially applies to cases where a pointer of base class
//points to an object of a derived class.

/* OVERRIDE
    the override identifier specifies the member function of 
    the derived class that overrides the member funcn of the 
    base class.

    when using virtual functions it is possible to mistake 
    while declaring the member function of the derived class
    using overide identifier the compiler prompts the compiler
    to display error.

    possible mistakes :- function with incorrect spellings,
    names,different parameters, different return types.
*/

class Base{
    public:
    virtual void print(){ // print derived
        cout<<"Base";
    }

};

class Derived : public Base{
    public:
    void print() override{
        cout<<"derived";
    }

};
int main(){

    Derived d1;

    Base* b1 = &d1;
    b1->print();

}