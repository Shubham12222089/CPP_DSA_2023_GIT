#include<bits/stdc++.h>
using namespace std;
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
    

// }

//=========queue=============

// int main(){
//     queue<string> st;
//     st.push("abc");
//     st.push("cde");
//     st.push("fgh");
//     st.push("ijk");
//     while(!st.empty()){
//         cout<<st.front()<<endl;
//         st.pop();
//     }
    

// }


//=========question===============

int main(){
    stack<char> st;
    string s="{[()]}";
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            st.pop();
        }
        else if(s[i]==']'){
            st.pop();
        }
        else if(s[i]=='}'){
            st.pop();
        }
    }
    if(!st.empty()){
        cout<<"not balanced";
    }
    else{
        cout<<"balanced";
    }
}