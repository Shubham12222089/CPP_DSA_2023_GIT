// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(Node* &head, int val){
//     Node* n = new Node(val);

//     if(head == NULL){
//         head=n;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next=n;
// }
// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp->data <<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }

// void insertAtHead(Node* &head, int val){
//     Node* n = new Node(val);
//     n->next=head;
//     head=n;
// }
// void searchVal(Node* &head, int d){

// }
// void deleteval(Node* &head,int val){
//     Node* temp = head;
//     if (head == NULL){
//         return;
//     }
//     while(temp->next->data != val){
//         temp=temp->next;
//     }
//     Node* toDelete = temp -> next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }
// void deletionathead(Node* &head, int val){
//     //Node* temp = head;
//     // head = temp->next;
//     // Node* toDelete=temp;
//     // delete toDelete;
//     //Both are correct;
//     Node* toDelete = head;
//     head = head->next;
//     delete toDelete;

// }
// Node* reverse(Node* &head){
//     Node* prev;
//     Node* curr=head;
//     Node* next;

//     while(curr!=NULL){
//         next = curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }
// Node* kreverse(Node* &head,int k){
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* next = NULL;

//     int count = 0;
//     while(curr!=NULL && count <k){
//         next = curr -> next;
//         curr->next=prev;

//         prev=curr;
//         curr=next;
//         count++;
//     }
//     if(next!=NULL){
//         head->next = kreverse(next,k);
//     }
//     return prev;
// }
// void arr(Node* &head,int arr[]{
//     int arr[100];
//     Node* n=new Node()
// })

// int main(){
//     Node *head = NULL;
//     insertAtTail(head,1);
    
//     insertAtTail(head,2);
//     insertAtTail(head,3);

//     insertAtHead(head,10);
//     display(head);
//     // cout<<endl;
//     // deleteval(head, 2);
//     // display(head);
//     // cout<<endl;
//     // deletionathead(head, 10);
//     // display(head);
//     // cout<<endl;
//     // insertAtHead(head,2);
//     // display(head);
//     cout<<endl;
//     // Node* newHead = reverse(head);
//     // display(newHead);
//     Node* newHead = kreverse(head,3);
//     display(newHead);
// }

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main() {

    ListNode* head = new ListNode(1);
    ListNode* current = head;
    for (int i = 2; i <= 5; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }


    int length = 0;
    current = head;
    while (current) {
        length++;
        current = current->next;
    }

    int* arr = new int[length];

    current = head;
    for (int i = 0; i < length; i++) {
        arr[i] = current->val;
        current = current->next;
    }


    cout << "Array representation of the linked list: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
