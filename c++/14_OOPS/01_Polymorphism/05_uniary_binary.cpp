#include<iostream>
using namespace std;

/*
*Uniary operators :
    - operators which work on a single operand.
    - eg -> ++, --, !

*Binary operators :
    - operators which work on a two operand.
    - eg -> ++, --, !
*/

class UniaryOverload{
    int hr,min;
    public:
    void input(){
        cout<<"Enter the time: ";
        cin>>hr;
        cout<<endl;
        cin>>min;
    }

    void operator ++(int){
        hr++;
        min++;
    }

    void operator --(int){
        hr--;
        min--;
    }

    void output(){
        cout<<"Time is : "<<hr<<" hr "<<min<<" min"<<endl;
    }
};
int main(){
    UniaryOverload obj;
    obj.input();
    obj++;
    cout<<"After Increment : ";
    obj.output();

    obj--;
    cout<<"After Decrement : ";
    obj.output();
}