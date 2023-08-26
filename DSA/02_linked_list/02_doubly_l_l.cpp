#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* previous;
    Node(int val){//constructor
        data=val;
        next=NULL;
        previous=NULL;

    }
};
void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    if(head!=NULL){
        head->previous=n;
    }
    head=n;
}
void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
    
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,10);
    display(head);


}
