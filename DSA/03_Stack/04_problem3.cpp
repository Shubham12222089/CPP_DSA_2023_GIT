#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int> &inputStack,int count,int size){
    if(inputStack.empty() || count == size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    deleteMiddle(inputStack, count+1,size);
    inputStack.push(num);
}
void addtobottom(stack<int> &originalelement, int toadd){
    stack<int> temp;
    //temp.push(toadd);
    while(!originalelement.empty()){
        temp.push(originalelement.top());
        originalelement.pop();
    }
    temp.push(toadd);
    while (!temp.empty()) {
        originalelement.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    int size=st.size();

    cout<<"Stack before deletion: ";
    stack<int> tempStack=st;
    while(!tempStack.empty()){
        cout<< tempStack.top()<<" ";
        tempStack.pop();
    }
    cout<<endl;
    deleteMiddle(st,0,size);

    cout<<"Stack after deletion: ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    stack<int> temp=st;
    addtobottom(st, 99);

    cout << "Stack after adding element to the bottom: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

}