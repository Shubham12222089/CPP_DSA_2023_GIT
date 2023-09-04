// Write a C++ class called "Employee" that has three 
//private member variables: "name", "salary", and "employeeCode". 
//The class should have a constructor that initializes these member 
//variables and a public member function called "displayInfo" that 
//prints out the employee's name, salary, and employeeCode.

// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     string name;
//     int salary;
//     int employeeCode;

// public:
//     Employee(){
//         cout << "Default Constructor invoked" << endl;
//     }

//     Employee(string employeeName, int employeeSalary, int code) {
//         cout<< "Paramaterized constructor invoked" <<endl;
//         name = employeeName;
//         salary = employeeSalary;
//         employeeCode = code;
//     }

//     void display() {
//         cout << "Employee Name: " << name << endl;
//         cout << "Employee Salary: " << salary << endl;
//         cout << "Employee Code: " << employeeCode << endl;
//     }
// };

// int main() {
//     Employee e2;//used to access the default constructor that is having no arguments.
//     Employee emp1("Subhash", 50000, 1);
//     emp1.display();

// }


// Write a C++ class called "Rectangle" that has two private member 
//variables: "length" and "width". The class should have a constructor 
//that initializes these member variables and public member functions 
//called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.

#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;
    public:

    Rectangle(){
        cout << "Default Constructor invoked" << endl;
    }

    Rectangle(int len,int wid){
        cout<< "Paramaterized constructor invoked" <<endl;
        length = len;
        width = wid;
    }
    int getArea(){
        return length*width;
    }
    int getPerimeter(){
        return 2*(length+width);
    }
};

int main(){
    Rectangle r1;
    Rectangle r2(5,4);
    int Area=r2.getArea();
    int Perimeter = r2.getPerimeter();

    cout << "Rectangle Area: " << Area << endl;
    cout << "Rectangle Perimeter: " << Perimeter << endl;
}