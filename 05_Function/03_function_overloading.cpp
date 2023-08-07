#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

float add(float a,float b){
    return a+b;
}
int main(){
    int x = add(2,2);
    float y = add(2.2f,2.2f);

    cout<<x<<endl;
    cout<<y;
}