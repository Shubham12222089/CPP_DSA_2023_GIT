#include<iostream>
using namespace std;

//Access modifiers
//public
//private
//protected

class Building{
    public: //public so it is accessible
    int door;
    string doorColor;

    //private: iske neeche sb private ho jaayenge
    int window;
    string windowColor;
    int elevator;

    void elevatorFunctioning(){
        //working of elevator
    }
};

int main(){

    Building b1;

    b1.door;
    b1.window;
}