#include<iostream>
#include<map>
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
    if (head==NULL) {
        n->next = n;
        head = n;
        return 1;
    }
    while(temp->next!=head){// *** imp point
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

bool isCircular(Node* head){
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp == head){
        return true;
    }
    else{
        return false;
    }

}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;//means linked list is empty.
    }
    Node* temp = head;

    map<Node*, bool> visited; //created a map;

    while(temp!=NULL){

        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp=temp->next;
    }
    return false;
}

Node* floydDectetionloop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        slow = slow->next;

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}
Node* getstartedNode(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* intersection = floydDectetionloop(head);

    Node* slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

int main(){
    Node* head=NULL;
    insertattail(head, 10);
    insertattail(head, 20);
    insertattail(head, 30);
    insertattail(head, 40);
    insertattail(head, 50);
    display(head);

    if(isCircular(head)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    if(floydDectetionloop(head)){
        cout<<"Loop"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    

}