// #include<iostream>
// #include<map>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// int insertattail(Node* &head, int val){
//     Node* n=new Node(val);
//     Node* temp=head;
//     if (head==NULL) {
//         n->next = n;
//         head = n;
//         return 1;
//     }
//     while(temp->next!=head){
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->next=head;
//     return 1; // Return 1 to indicate a successful insertion.
// }

// void display(Node* &head){
//     Node* temp=head;
//     if(head==NULL){
//         return;
//     }
//     while(temp->next!=head){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<temp->data<<endl;
// }

// bool isCircular(Node* head){
//     Node* temp = head->next;
//     while(temp!=NULL && temp!=head){
//         temp=temp->next;
//     }
//     if(temp == head){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// bool detectLoop(Node* head){
//     if(head==NULL){
//         return false;
//     }
//     Node* temp = head;
//     map<Node*, bool> visited;

//     while(temp!=NULL){
//         if(visited[temp] == true){
//             return true;
//         }
//         visited[temp] = true;
//         temp=temp->next;
//     }
//     return false;
// }

// // Function to remove the loop if it exists
// void removeLoop(Node* head) {
//     if (head == nullptr) {
//         return;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     // Detect the loop using Floyd's cycle detection algorithm
//     while (fast != nullptr && fast->next != nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast) {
//             break; // Loop detected
//         }
//     }

//     // If a loop exists, find the starting point of the loop and remove it
//     if (slow == fast) {
//         slow = head;
//         while (slow->next != fast->next) {
//             slow = slow->next;
//             fast = fast->next;
//         }
//         fast->next = nullptr; // Remove the loop
//     }
// }

// int main(){
//     Node* head = NULL;
//     insertattail(head, 10);
//     insertattail(head, 20);
//     insertattail(head, 30);
//     insertattail(head, 40);
//     insertattail(head, 50);

//     // Create a loop
//     head->next->next->next->next->next = head->next;

//     if (isCircular(head)){
//         cout << "Yes, the linked list is circular." << endl;
//         // Removing the loop
//         removeLoop(head);
//         cout << "Loop removed." << endl;
//     }
//     else{
//         cout << "No, the linked list is not circular." << endl;
//     }

//     display(head);

//     return 0;
// }


//===============================

// C++ program to delete every k-th Node of
// a singly linked list.
#include<bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node
{
	int data;
	struct Node* next;
};

// To remove complete list (Needed for
// case when k is 1)
void freeList(Node *node)
{
	while (node != NULL)
	{
		Node *next = node->next;
		delete (node);
		node = next;
	}
}

// Deletes every k-th node and returns head
// of modified list.
Node *deleteKthNode(struct Node *head, int k)
{
	// If linked list is empty
	if (head == NULL)
		return NULL;

	if (k == 1)
	{
	freeList(head);
	return NULL;
	}

	// Initialize ptr and prev before starting
	// traversal.
	struct Node *ptr = head, *prev = NULL;

	// Traverse list and delete every k-th node
	int count = 0;
	while (ptr != NULL)
	{
		// increment Node count
		count++;

		// check if count is equal to k
		// if yes, then delete current Node
		if (k == count)
		{
			// put the next of current Node in
			// the next of previous Node
			delete(prev->next);
			prev->next = ptr->next;

			// set count = 0 to reach further
			// k-th Node
			count = 0;
		}

		// update prev if count is not 0
		if (count != 0)
			prev = ptr;

		ptr = prev->next;
	}

	return head;
}

/* Function to print linked list */
void displayList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

// Utility function to create a new node.
struct Node *newNode(int x)
{
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}

/* Driver program to test count function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);
	head->next->next->next->next->next = newNode(6);
	head->next->next->next->next->next->next =
										newNode(7);
	head->next->next->next->next->next->next->next =
										newNode(8);

	int k = 3;
	head = deleteKthNode(head, k);

	displayList(head);

	return 0;
}
