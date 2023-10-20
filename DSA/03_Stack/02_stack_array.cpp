// #include<iostream>
// using namespace std;

// class Stack{
//     int* arr; //creating dynamically;
//     int top;
//     int size;

//     public:
//     Stack(){ //constructor.
//         //size=100;
//         arr = new int[size];
//         top = -1;
        
//     }

//     void push(int val){
//         if(top == size-1){
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top] = val;
//     }

//     void pop(){
//         if(top==-1){
//             cout<<"No elements to return"<<endl;
//             return;
//         }
//         top--;
//     }
//     int Top(){
//         if(top==-1){
//             cout<<"No element in stack"<<endl;
//             return -1;
//         }
        
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };

// int main(){
//     Stack st;
//     st.push(1);
//     st.push(2);
//     cout<<st.Top()<<endl;

// }

//=======================

// #include<iostream>
// using namespace std;

// class stack{
//     string* arr;
//     int top;
//     int size;
//     public:
//     stack(){
//         arr = new string[size];
//         top=-1;
//     }
//     void push(int val){
//         for(int i=0;i<)
//         if(arr[i]!=32)
//         if(top=size-1){
//             cout<<"Stack Overflow";
//         }
//         top++;
//         arr[top]=val;
//     }

// };

//---------------------------

#include<iostream>
#include<stack>
using namespace std;

void reverse(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i] != 32 && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);

    }
    while(!st.empty()){
        cout<< st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    string s = "Hello, How are you?";
    reverse(s);
}

