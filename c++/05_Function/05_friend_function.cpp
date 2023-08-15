// #include<iostream>
// using namespace std;

// class complex{
//     int a, b;

//     public:
//     void setNumber(int num1, int num2){
//         a = num1;
//         b = num2;
//     }

//     void print(){
//         cout << "Your number is: " << a << " + " << b << "i" <<endl;
//     }
//     friend complex sumComplex(complex , complex);
// };

// complex sumComplex(complex obj1, complex obj2){
//     complex result;
//     result.setNumber((obj1.a + obj2.a), (obj1.b+obj2.b));
//     return result;
// } 

// int main(){
//     complex c1, c2, sum;
//     c1.setNumber(1,2);
//     c2.setNumber(2,3);
//     c1.print();
//     c2.print();

//     sum = sumComplex(c1,c2);
//     sum.print();
// }

//friend function property:
//has access to private and protected members
//friend function cannot be called by objects of complex class
//cannot access 


// Define a class Rectangle with private attributes length 
// and width. Create a friend function named calculateArea 
// that calculates the area of the rectangle.

// class Rectangle{
//     int length;
//     int width;

//     public:
//     void area(int num1, int num2){
//         length = num1;
//         width = num2;
//     }

//     int calculateArea(){
//         return length * width;
//     }
//     friend Rectangle Areavalue(Rectangle, Rectangle);
// };

// Rectangle Areavalue(Rectangle obj1, Rectangle obj2){
//     Rectangle result;
//     result.area(obj1.length,obj2.width);
//     return result;
    
// }
// int main(){
//     Rectangle c1, alg;
//     c1.area(4,8);
//     c2.area(5,6);
//     c1.calculateArea();
//     c2.calculateArea();

//     alg = Areavalue(c1,c2);
//     int combined = alg.calculateArea();
//     cout<<combined;

// }


//-----------------------

// class complex{
//     int a,b;

//     public:
//     void setnumber(int num1, int num2){
//         a = num1;
//         b = num2;
//     }
//     void print(){
//         cout << "Result is : " << a <<" + "<<b<<"i"<<endl;
//     }

//     friend class Calculator;
// };

// class Calculator{
//     public:
//     int sumreal(complex obj1, complex obj2){
//         return obj1.a + obj2.a;
//     }
// };

// int main(){
//     complex o1,o2;
//     o1.setnumber(1,2);
//     o2.setnumber(2,3);

//     Calculator calc;
//     int alg = calc.sumreal(o1,o2);
//     cout << "real sum is: "<<alg;

// }

//------------------------------------------

// #include <iostream>
// using namespace std;

// class calculator; // Forward declaration

// class add {
//     int a, b;

// public:
//     void setnumber(int num1, int num2) {
//         a = num1;
//         b = num2;
//     }

//     int getA() {
//         return a;
//     }

//     friend class calculator;
// };

// class calculator {
// public:
//     int sum(add obj1, add obj2) {
//         return obj1.a + obj2.a;
//     }
// };

// int main() {
//     add o1, o2;
//     o1.setnumber(2, 5);
//     o2.setnumber(3, 7);

//     calculator calc;
//     int alg = calc.sum(o1, o2);
//     cout << "sum is: " << alg;

//     return 0;
// }

//-----------adding two numbers using friend function---------
#include<iostream>
using namespace std;



class add{
    int a,b;

    public:
    int setnumber(int num1,int num2){
        a=num1;
        b=num2;
    }
    friend int sum(add obj);
};
int sum(add obj){
    return obj.a+obj.b;
}


int main(){
    add nums;
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    nums.setnumber(num1, num2);

    int result = sum(nums);
    cout << "Sum is: " << result;
}