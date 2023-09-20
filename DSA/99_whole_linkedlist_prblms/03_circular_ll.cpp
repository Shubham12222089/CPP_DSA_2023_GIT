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

int insertattail(Node* &head, int val){
    Node* n=new Node(val);
    Node* temp=head;
    if (head==NULL) {
        n->next = n;
        head = n;
        return 1;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    return 1; // Return 1 to indicate a successful insertion.
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
        return false;
    }
    Node* temp = head;
    map<Node*, bool> visited;

    while(temp!=NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp=temp->next;
    }
    return false;
}

// Function to remove the loop if it exists
void removeLoop(Node* head) {
    if (head == nullptr) {
        return;
    }

    Node* slow = head;
    Node* fast = head;

    // Detect the loop using Floyd's cycle detection algorithm
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break; // Loop detected
        }
    }

    // If a loop exists, find the starting point of the loop and remove it
    if (slow == fast) {
        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = nullptr; // Remove the loop
    }
}

int main(){
    Node* head = NULL;
    insertattail(head, 10);
    insertattail(head, 20);
    insertattail(head, 30);
    insertattail(head, 40);
    insertattail(head, 50);

    // Create a loop
    head->next->next->next->next->next = head->next;

    if (isCircular(head)){
        cout << "Yes, the linked list is circular." << endl;
        // Removing the loop
        removeLoop(head);
        cout << "Loop removed." << endl;
    }
    else{
        cout << "No, the linked list is not circular." << endl;
    }

    display(head);

    return 0;
}
