#include<iostream>
using namespace std;

class Base{
    private:
    int private1 = 1;

    protected:
    int protected1 = 2;

    public:
    int public1 = 3;

    int getPrivateValue(){
        return private1;
    }
};

class publicDerived : public Base{
    public:
    int getProtectedValue(){
        return protected1;
    }

};
int main(){
    publicDerived obj1;

    cout<<"Public : "<<obj1.public1<<endl;
    cout<<"Private : "<<obj1.getProtectedValue()<<endl;
    cout<<"Private : "<<obj1.getPrivateValue()<<endl;
}