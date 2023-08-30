#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
int insertattail(Node* &head,int val){
    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=head){// *** imp point
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
int display(Node* &head){
    Node* temp=head;
    while(temp->next!=head){
        cout<<temp<<"->";
        temp=temp->next;
    }
    
}
int main(){
    Node* head=NULL;
    insertattail(head, 10);
    insertattail(head, 20);
    insertattail(head, 30);
    display(head);

}