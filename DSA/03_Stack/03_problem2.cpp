//If the current character is a closing bracket (')', '}', 
//or ']'), it checks if the stack is not empty and if the 
//top of the stack matches the corresponding opening bracket. 
//If they match, it pops the top element from the stack; otherwise, 
//it sets ans to false and breaks out of the loop.
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack <char> st;
    bool ans=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
}
int main(){
    string s = "[";

    if(!isValid(s)){
        cout<< "Invalid";
    }
    else{
        cout<< "IsValid";
    }
}