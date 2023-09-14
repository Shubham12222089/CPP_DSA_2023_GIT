#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }

};
void insertathead(Node* &head,int val){
    Node* n = new Node(val);
    Node* temp=head;
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
    
void insertattail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
    }
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head=NULL;
    insertathead(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
}