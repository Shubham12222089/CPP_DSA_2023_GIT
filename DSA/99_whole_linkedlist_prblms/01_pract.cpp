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
void insertionathead(Node* &head,int val){
    Node* n =new Node(val);
    Node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void mid(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"Middle element is: "<<slow->data<<endl;
}

int main(){
    Node* head = NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);
    display(head);
    cout<<endl;
    mid(head);

}