#include<iostream>
using namespace std;

/*
    public inherotance make public members of the base class public in derived class.
    and protected members of base class will remain PROTECTED in derived class.

    protected inheritance makes the PUBLIC and PROTECTED members of base class PROTECTED
    in derived class.

    private inheritance makes the PUBLIC and PROTECTED members of base class private in 
    derived

    private members of base class are inaccessible to the derived class.
*/

class Base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class PublicDerived : public Base{
    //x is public
    //y is protected
    //z is not accessible
};

class ProtectedDerived : protected Base{
    //x is protected
    //y is protected
    //z is not accessible
};

class PrivateDerived : private Base{
    //x is private
    //y is private
    //z is not accessible
};

int main(){

}
