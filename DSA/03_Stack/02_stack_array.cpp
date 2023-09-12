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


#include<iostream>
using namespace std;

class stack{
    int* arr;
    int top;
    int size;
    public:
    stack(){
        arr=new int[size];
        top=-1;
    }
    void push(int val){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"No elements to return"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No elements to return"<<endl;
        }
        return arr[top];
    }

};
int main(){
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    cout<<s.Top();
}