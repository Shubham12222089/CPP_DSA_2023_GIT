#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Constructor of base class"<<endl;
    }
    virtual ~Base(){
        cout<<"Destructor of base class"<<endl;
    }
};

class child : public Base{
    public:
    child(){
        cout<<"Constructor of child class"<<endl;
    }
    ~child(){
        cout<<"Destructor of child class"<<endl;
    }
};

int main(){
    child* ch = new child();
    Base* base = ch;

    delete base;
}

//we have used parent class(Base) and derived class(child)
// inside which both constructors and destructors are defined.

//deleting an object of derived class using a pointer of
//parent class shows on undefined behaviour because it 
// does not have virtual destructor. so , when we delete the
// object of child class, it invokes the base class's destructor
// but the child class's destructor is not invoked. As seen in logs,
//the destructor of child class is not invoked because the class pointer
//can only remove the base class's destructor, which causes the 
//problem of memory leak in the program. so the solution is virtual keyword in base class.