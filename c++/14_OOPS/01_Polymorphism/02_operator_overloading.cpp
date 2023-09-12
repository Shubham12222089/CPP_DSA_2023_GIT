#include<iostream>
using namespace std;

//operator overloading --> we can overload an operator as long as
//user-defined types like objects as structures
//we cannot use operator overloading for basic types such as int, double,etc;

// It's a COMPILE TIME POLYMORPHISM.
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