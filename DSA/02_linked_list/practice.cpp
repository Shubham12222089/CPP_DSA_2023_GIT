#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){//constructor
        data = val;
        next=NULL;
    }
};
void insertathead(Node* &head,int val){
    Node* temp = new Node(val); //creating new node;
    temp->next = head;
    head=temp; //update the head to point the new node.
}
void insertattail(Node* &head,int val){
    Node* n= new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;//created a new node and attached to tail.
}
void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    //created node1
    Node* head = NULL;
    insertathead(head, 20);
    insertattail(head, 30);
    insertathead(head, 10);
    insertattail(head, 40);
    display(head);

    return 0;
}