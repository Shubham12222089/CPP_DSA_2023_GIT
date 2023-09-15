#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
//we are iterating loop in reverse order:
int prefix(string s){

    stack<int> st;

    for (int i = s.length()-1; i >= 0; i--)
    {
        if(s[i]>='0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{//if i have an operator
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();
            switch (s[i]){
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1-operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1/operand2);
                    break;
                case '^':
                    st.push(pow(operand1, operand2));
                    break;
            }

        }
    }
    return st.top();
}
int postfix(string s){
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{//if i have an operator
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();
            switch (s[i]){
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1-operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1/operand2);
                    break;
                case '^':
                    st.push(pow(operand1, operand2));
                    break;
            }

        }
    }
    return st.top();
}
int main(){
    //string s="-+7*45+20";
    string s="745*+20+-";
    //cout<<prefix(s)<<endl;
    cout<<postfix(s)<<endl;

}