#include<iostream>
using namespace std;

class Animal{
    string type;

    public:
    Animal() : type("Animal") {}; // 2nd way of declaring a constructor
    
    virtual string getType(){
        return type;
    }
};

class Dog : public Animal{
    string type;
    public:
    Dog() : type("Dog") {};  //constructor
    string getType() override{
        return type;
    }
};

class Cat : public Animal{
    string type;
    public:
    Cat() : type("Cat") {};  //constructor
    string getType() override{
        return type;
    }
};

void print(Animal* animal){
    cout <<"Animal Type : " << animal->getType();
    cout<<endl;
}

int main(){
    Animal* dog = new Dog();
    Animal* animal1 = new Animal();
    Animal* cat = new Cat();

    print(animal1);
    print(dog);
    print(cat);

}