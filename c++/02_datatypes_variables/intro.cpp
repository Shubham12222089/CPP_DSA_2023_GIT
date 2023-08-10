#include<iostream>
using namespace std;
#include<string.h>

int main(){
    // int x = 5; //int takes 4 byte i.e 32 bits.
    // double y = 5.5; //double can take 8 bytes.double can hold more values.
    // float z = 10.5; //float takes 4 bytes.
    // char ch = 'c';
    // const int n = 6;//fixed 
    // //bool
    // string st = "cpp";
    // cout<< x <<endl;
    // cout<< y <<endl;
    // cout<< z <<endl;
    // cout<< ch <<endl;
    // cout<< st <<endl;
    // cout<<sizeof(double);

    int userInput;
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Enter your age: ";
    cin>>userInput;

    cout<< "Name is : " << name <<endl;
    cout<< "Age is : " << userInput <<endl;

    

    // int num1,num2;
    // cout<<"num1: ";
    // cin>>num1;
    // cout<<"num2: ";
    // cin>>num2;

    // int sum = num1+num2;
    // cout<<"Sum is : "<<sum;

    //arithmetic operator
    // int sum,sub,mul,div,mod,a,b;
    // cin>>a;
    // cin>>b;
    // cout<<"sum is: "<<a+b<<endl;
    // cout<<"sub is: "<<a-b<<endl;
    // cout<<"Multiplication is: "<<a*b<<endl;
    // cout<<"division is: "<<a/b<<endl;
    // cout<<"mod is: "<<a%b<<endl;

}


//print the value of below arithmetic operator.
// Add +
// sub -
// mul *
// Div /
// Modulus %