#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=n;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next=head;
    head=n;
}
void searchVal(Node* &head, int d){

}
void deleteval(Node* &head,int val){
    Node* temp = head;
    if (head == NULL){
        return;
    }
    while(temp->next->data != val){
        temp=temp->next;
    }
    Node* toDelete = temp -> next;
    temp->next = temp->next->next;
    delete toDelete;
}
void deletionathead(Node* &head, int val){
    //Node* temp = head;
    // head = temp->next;
    // Node* toDelete=temp;
    // delete toDelete;
    //Both are correct;
    Node* toDelete = head;
    head = head->next;
    delete toDelete;

}
Node* reverse(Node* &head){
    Node* prev;
    Node* curr=head;
    Node* next;

    while(curr!=NULL){
        next = curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
    Node *head = NULL;
    insertAtTail(head,1);
    
    insertAtTail(head,2);
    insertAtTail(head,3);

    insertAtHead(head,10);
    display(head);
    // cout<<endl;
    // deleteval(head, 2);
    // display(head);
    // cout<<endl;
    // deletionathead(head, 10);
    // display(head);
    // cout<<endl;
    // insertAtHead(head,2);
    // display(head);
    cout<<endl;
    Node* newHead = reverse(head);
    display(newHead);
}