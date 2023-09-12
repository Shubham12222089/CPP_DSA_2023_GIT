// #include<iostream>
// using namespace std;

// class A{
//     int a, b;

//     public:

//     // A(int a,int b){
//     //     a = a;
//     //     b = b;
//     // }

//     A(int a,int b){
//         this->a = a;
//         this->b = b;
//     }


//     void display(){
//         cout << a << " " << b <<endl;
//     }
// };

// int main(){
//     A obj1(10,20);

//     obj1.display(); //it will take garbage value because are actually assigning values to the constructor parameters, 
//     //not the class member variables
//     //to fix this we can use "this" keyword.
// }

#include<iostream>
using namespace std;

class person{
    private:
    int age;
    public:
    void iage(int age){
        this->age=age;
    }
    void showage(){
        cout<<"Age is: "<<age<<endl;
    }
};
int main(){
    person p1;
    p1.iage(22);
    p1.showage();
}