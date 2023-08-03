#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter a number b/w 1 and 3: ";
    cin>>s;
    switch(s){
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        default:
            cout<<"Out of range.";
    }

}