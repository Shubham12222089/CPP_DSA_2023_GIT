#include<iostream>
using namespace std;

//operator overloading --> we can overload an operator as long as
//user-defined types like objects as structures
//we cannot use operator overloading for basic types such as int, double,etc;

// It's a COMPILE TIME POLYMORPHISM.

//conditions operators,dot operators are not used in operator overloading.
class Count{
    int value;

    public:
    Count(){
        value=10;
    }

    void operator ++(){
        value=value+2;
    }

    void display(){
        cout<<"Count : "<<value<<endl;
    }
};
int main(){

    Count count1;

    count1.display();

    ++count1;

    count1.display();
}


/*
    *Rules of operator overloading
1 -- atleast one of the operand must be user defined class objects.
2 -- we can only overload existing operators
3 -- some operators cannot overloaded
    -> ?:, ::, .,

*/