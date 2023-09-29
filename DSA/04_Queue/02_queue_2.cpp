#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
    Node* front;
    Node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        Node* n = new Node(x);

        if(front==NULL){//empty queue
            back==n;
            front==n;
            return;
        }

        back->next;
        back=n;
    }

    void pop(){
        if(front==NULL || front>back){
            return;
        }
        Node* del=front;
        front=front->next;
        delete del;
    }


};

int main(){

}