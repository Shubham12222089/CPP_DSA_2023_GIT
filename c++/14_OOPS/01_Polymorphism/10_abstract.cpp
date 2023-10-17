#include<iostream>
using namespace std;

//abstract class refers to a class containing atleast one pure virtual function,
// which can not be intantiated.

//class Shape{

    // public:
    // int shape_width;
    // int shape_height;
    // void width(int w){
    //     shape_width = w;
    // }

    // void height(int h){
    //     shape_height=h;
    // }

    // int perimeterOfSquare(int side){
    //     return 4*side;
    // }

    // int perimeterOfRectangle(int l,int b){
    //     return 2*(l+b);
    // }

    //all the functions of square and rectangle are clubbed in a single class.
    //we could have made a parent class of shape , we could have different class.

    //characteristics-
    //1     abstract class must have atleast on pure virtual function.
    //2     abstract classesss can not be intantiated, but pointers and refrences of abstract type class
    // can be created . we can not create objected of an abstract class.

    //3     classes that inherits the abstractclass must implement all pure virtual function.
    
//};

class Shape{
    public:
    int shape_width;
    int shape_height;

    void width(int w){
        shape_width=w;
    }

    void height(int h){
        shape_height=h;
    }
    virtual int perimeter() = 0;
};
class Rectangle : public Shape{
    public:
    int perimeter(){
        return 2 * (shape_height + shape_width);
    }
};

class Square : public Shape{
    public:
    int perimeter(){
        return 4 * shape_width;
    }
};

int main(){
    Rectangle r1;
    Square s1;

    r1.width(10);
    r1.height(5);
    s1.width(12);

    cout<<r1.perimeter();

}


