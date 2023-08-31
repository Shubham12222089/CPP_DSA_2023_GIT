// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){//constructor
//         data = val;
//         next=NULL;
//     }
// };
// void insertathead(Node* &head,int val){
//     Node* temp = new Node(val); //creating new node;
//     temp->next = head;
//     head=temp; //update the head to point the new node.
// }
// void insertattail(Node* &head,int val){
//     Node* n= new Node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;//created a new node and attached to tail.
// }
// void display(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     //created node1
//     Node* head = NULL;
//     insertathead(head, 20);
//     insertattail(head, 30);
//     insertathead(head, 10);
//     insertattail(head, 40);
//     display(head);

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insertattail(Node* &head, int val){
//     Node* n= new Node(val);

//     if(head==NULL){
//         head = n;
//         return;
//     }

//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
// }

// int main(){
//     Node* head=NULL;
//     insertattail(head, 10);
//     insertattail(head, 20);
//     display(head);
// }

//=================singly list============================
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        int data=val;
        next=NULL;
    }
};

int insertathead(Node* &head,int val){
    Node* n = new Node(val);
    Node* temp=head;
    if(head==NULL){
        n->next=n;
        n=head;
    }
    else{
        n->next=head;
        head=n;
    }
}
int display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    insertathead(head,10);
    display(head);

}