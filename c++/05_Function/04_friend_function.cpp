#include<iostream>
using namespace std;

// class A{
//     int data; //this is private data.

//     public:

//     void setValue(int value){
//         data = value;

//     }

//     friend void printData(A);//method to access the private member of a class,
// };



// void printData(A obj1){
//     cout<< obj1.data << endl;
// }
// int main(){
//     A a1;
//     a1.setValue(10);

//     printData(a1);
// }


//=============================


class B; //forward declaration.
class A{
    int data; //this is private data.

    public:

    void setValue(int value){
        data = value;

    }

    friend void addValue(A,B);//method to access the private member of a class,
};

class B{
    int data;

    public:
    void setValue(int value){
        data = value;
    }

    friend void addValue(A,B);

};

void addValue(A obj1, B obj2){
    cout<< "Adding object value of A and B is : "<<obj1.data +obj2.data << endl;
}
int main(){
    A a1;
    a1.setValue(10);

    B b1;
    b1.setValue(5);

    addValue(a1,b1);
}
