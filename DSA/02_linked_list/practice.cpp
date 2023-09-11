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

// int insertathead(Node* &head,int val){
//     Node* n = new Node(val);
//     n->next=head;
//     head=n;

// }

// int insertattail(Node* &head,int val){
//     Node* n=new Node(val);
//     Node* temp=head;
//     if(head==NULL){
//         head=n;
//     }
//     while(temp->next!=NULL){
//         temp=temp->next;

//     }
//     temp->next=n;

// }
// int display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
// }

// int deletion(Node* &head,int val){
//     Node* n = new Node(val);
//     Node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     Node* dlt=temp->next;
//     temp->next=temp->next->next;
//     delete dlt;

// }



// int main(){
//     Node* head=NULL;
//     insertathead(head,10);
//     display(head);
//     cout<<endl;
//     insertattail(head,20);
//     insertattail(head,30);
//     insertattail(head,40);
//     insertattail(head,50);
//     display(head);
//     cout<<endl;
//     deletion(head,40);
//     display(head);


// }

//--------------doubly linked list---------------------

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* previous;

//     Node(int val){
//         data = val;
//         next = NULL;
//         previous = NULL;
//     }
// };

// void insertathead(Node* &head,int val){
//     Node* n = new Node(val);
//     n->next=head;
//     if(head!=NULL){
//         head->previous=n;
//     }
//     head=n;
// }
// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";

// }
// void insertattail(Node* &head,int val){
//     Node* n = new Node(val);
//     Node* temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->previous=temp;
// }
// void deletion(Node* head,int val){
//     Node* n = new Node(val);
//     Node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     Node* dlt = temp->next;
//     temp->next=temp->next->next;
//     delete dlt;
// }

// int main(){

//     Node* head=NULL;
//     insertathead(head,10);
//     display(head);
//     cout<<endl;
//     insertattail(head,20);
//     insertattail(head,30);
//     insertattail(head,40);
//     display(head);
//     cout<<endl;
//     deletion(head,20);
//     display(head);


// }

//===================circular linked list============================
#include<iostream>
#include<map>
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

void insertattail(Node* &head,int val){
    Node* n = new Node(val);
    Node* temp = head;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(Node* &head){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}

//loop detection using map 
bool loopdetection(Node* &head){
    Node* temp = head;
    if(head==NULL){
        return false;
    }

    map <Node*, bool> visited;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp=temp->next;
    }
    return false;

}

//loop detection using floyd method

void floydDetection(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            cout<<"Loop exists, starting point : "<<slow->data<<endl;
            return;
        }
    }
}


int main(){
    Node* head=NULL; 
    insertattail(head,3);
    insertattail(head,10);
    insertattail(head,20);
    insertattail(head,30);
    display(head);

    if(loopdetection){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    floydDetection(head);



    
}
    
//------------------sorting of linked list---------------------------
// #include <iostream>

// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void xyz(Node*& head, int val) {
//     Node* n = new Node(val);
//     Node* temp = head;
//     if (head == NULL) {
//         head = n;
//         return;
//     }
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = n;
// }


// void display(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }

// Node* merge(Node* n1, Node* n2) {
//     if (n1 == NULL)
//         return n2;
//     if (n2 == NULL)
//         return n1;

//     Node* result;
    
//     if (n1->data <= n2->data) {
//         result = n1;
//         result->next = merge(n1->next, n2);
//     } else {
//         result = n2;
//         result->next = merge(n1, n2->next);
//     }

//     return result;
// }

// int main() {
//     Node* head1 = NULL;
//     xyz(head1, 1);
//     xyz(head1, 3);
//     xyz(head1, 5);

//     Node* head2 = NULL;
//     xyz(head2, 2);
//     xyz(head2, 4);
//     xyz(head2, 6);

//     cout << "List 1: ";
//     display(head1);
//     cout << endl;

//     cout << "List 2: ";
//     display(head2);
//     cout << endl;

//     Node* mergedHead = merge(head1, head2);

//     cout << "Merged Linked List: ";
//     display(mergedHead);

//     return 0;
// }
