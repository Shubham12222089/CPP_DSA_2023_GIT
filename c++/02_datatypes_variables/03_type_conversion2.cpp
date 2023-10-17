#include<iostream>
using namespace std;

/*
        One class type to other class type

        when we assign to the object of a class into the object of another class then it is
        called to class to class conversion.
        This can be performed either by defining casting operator function in source class
        or using constructor in the destination class.
*/


class Rectangle{
    int width;
    int length;
    int area;

    public:
    Rectangle(int w,int l){
        width = w;
        length = l;
        area = width * length;
    }

    void print(){
        cout<<"width : "<<width<<"Length : "<<length<<"Area : "<<area<<endl;
    }
};

class Triangle{
    int base, height;
    float area;
    public:
    Triangle(int b,int h){
        base = b;
        height=h;
        area=0.5 * base * height;
    }

    void print(){
        cout<<"Base : "<<base<<"heght : "<<height<<"Area : "<<area<<endl;
    }
    operator Rectangle(){
        Rectangle temp(base, height);
        return temp;
    }
};


int main(){
    Triangle t(10,20);

    Rectangle r = t;
    t.print();
}