#include<iostream>
using namespace std;

/*
    those classes/structure contains one or more than one
    pointer as their member which will be pointing to the
    structure of the same type.

    a class/struct that points to the class/struct of the
    same type.

    eg -> in linked list , trees
*/
//self referential class with single link
class Node{
    public:
    int data;
    Node* next;
};


//self referential class with multiple link
//we can make like doubly linked list

int main(){
    Node obj1;
    obj1.next=NULL;
    obj1.data=1;

    Node obj2;
    obj2.next = NULL;
    obj2.data = 2;

    obj1.next=&obj2;

    cout<<obj1.next->data;
}