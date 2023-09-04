#include<iostream>
using namespace std;

class Number{
    int a;

    public:
    Number(){
        cout<<"default Constructor."<<endl;
        a=0;
    }

    Number(int num){
        cout<<"Paramaterized constructor invoked"<<endl;
        a=num;
    }

    //copy constructor:
    Number(Number &obj){//it will take object by refrence.
        cout<<"Copy constructor"<<endl;
        a=obj.a;
    }

    void display(){
        cout<<"THe value of a is: " <<a<<endl;
    }
};

int main(){
    Number n1;
    n1.display();
    Number n2(10);
    n2.display();

    Number n3(n2);
    n3.display();

}