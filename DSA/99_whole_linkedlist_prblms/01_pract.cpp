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
// void insertionathead(Node* &head,int val){
//     Node* n =new Node(val);
//     Node* temp=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     n->next=head;
//     head=n;
// }
// void display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
// }
// void mid(Node* &head){
//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     cout<<"Middle element is: "<<slow->data<<endl;
// }

// //reverse a linked list
// void reverse(Node* &head){
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* next;
//     while(curr!=NULL){
//         next=curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=next;
//     }
//     head=prev; 
// }
// void conversion_sl_cr(Node* &head){
//     Node* temp=head;
//     if(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=head;
// }
// void loopdetection(Node* &head){
//     Node* fast=head;
//     Node* slow=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             cout<<"loop exist."<<endl;
//             return;
//     }
//     }
    
// }


// int main(){
//     Node* head = NULL;
//     insertionathead(head,50);
//     insertionathead(head,40);
//     insertionathead(head,30);
//     insertionathead(head,20);
//     insertionathead(head,10);
//     display(head);
//     cout<<endl;
//     mid(head);

//     reverse(head);
//     cout<<endl;
//     display(head);

//     conversion_sl_cr(head);
//     cout<<endl;
//     loopdetection(head);

// }


// #include <iostream>
// #include<stack>
// using namespace std;
// void mid(stack<int> &st){
//     int middle = st.size()/2;
//     stack<int> temp;
//     for(int i=0;i<middle;i++){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.pop();
//     while(!temp.empty()){
//         st.push(temp.top());
//         temp.pop(); 
//     }
// }

// int main() {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
    
//     mid(s);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }

//     return 0;
// }


// #include <iostream>
// #include<stack>
// #include<cmath>
// using namespace std;
// int prefix(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+':
//                     st.push(op1 + op2);
//                     break;
//                 case '-':
//                     st.push(op1-op2);
//                     break;
//                 case '*':
//                     st.push(op1*op2);
//                     break;
//                 case '/':
//                     st.push(op1/op2);
//                     break;
//                 case '^':
//                     st.push(pow(op1,op2));
//                     break;
//             }
//         }
//     }
//     return st.top();
// }

// int main() {
//     string s = "-+7*45+20";
//     cout<<prefix(s);

//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
void rev(stack<int> &st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    
    rev(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

    return 0;
}