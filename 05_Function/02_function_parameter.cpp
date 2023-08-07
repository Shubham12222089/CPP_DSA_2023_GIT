#include<iostream>
using namespace std;

//default parameter

// void printName(string name = "Hello"){
//     cout << "The name is : " << name <<endl;
// }

// int main(){

//     printName();
//     printName("world");
// }

//--------
// void fullName(string firstName, string lastName){
//     cout<< "First name is : " << firstName << " and last name is: "<< lastName;
// }
// int main(){
//     fullName("Hello","world");
// }

//-------------------
// void me(string name, int marks){
//     cout<<"My name is "<<name<<" and my marks in 12th is "<<marks;
// }

// int main(){
//     me("Shubham Jha",80);
// }

//-------------------------

// int add(int num1, int num2){
//     return num1 + num2;
// }

// int main(){
//     cout<<add(5,5);
// }

//-------------------
//qn
// int func(int num1,int num2){
//     cout<<"The sum is : "<<num1+num2;
// }
// int main(){
//     int num1,num2;
//     cin>>num1;
//     cin>>num2;
//     func(num1,num2);
// }

//--------------
//qn

int max(int a, int b, int c){
    if(a>b && a>c){
        cout<<a<<" is maximum";
    }
    else if(b>c && b>a){
        cout<<b<<" is maximum";
    }
    else{
        cout<<c<<" is maximum";
    }    
}
int min(int a, int b, int c){
    if(a<b && a<c){
        cout<<a<<" is minimum";
    }
    else if(b<c && b<a){
        cout<<b<<" is minimum";
    }
    else{
        cout<<c<<" is minimum";
    }    
}

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    max(a,b,c);
    cout<<"\n";
    min(a,b,c);
    
}