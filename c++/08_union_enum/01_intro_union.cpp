#include<iostream>
using namespace std;

union car{
    char name[20];
    int price;
};
struct bike{
    char name[20];
    int price;
};

int main(){

    car car1;
    bike bike1;
}