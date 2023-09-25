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

//reverse a linked list
void reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    head=prev; 
}
void conversion_sl_cr(Node* &head){
    Node* temp=head;
    if(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
}
void loopdetection(Node* &head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"loop exist."<<endl;
            return;
    }
    }
    
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

    reverse(head);
    cout<<endl;
    display(head);

    conversion_sl_cr(head);
    cout<<endl;
    loopdetection(head);

}