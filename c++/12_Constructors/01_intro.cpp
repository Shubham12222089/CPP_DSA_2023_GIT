// #include<iostream>
// using namespace std;

// //A constructor is a special type of member
// //function that is called automatically when an object is created
// //constructor's name is same as the class name.
// //constructor function got called first in class.

// class Student{
//     public:
//     string name;
//     int age;
//     string gender;

//     //default constructor-->even if we don't call , it will automatically get called.
//     Student(){
//         cout << "Default Constructor invoked" << endl;
//     }

//     // Student(string gender){
//     //     gender = myGender;
//     // }

//     // void Student(){
//     //     cout << "Test" << endl; //it needs to get called . not a constructor
//     // }

//     Student(string myName,int myAge,string myGender){
//         cout<< "Paramaterized constructor invoked" <<endl;
//         name = myName;
//         age = myAge;
//         gender = myGender;
//     }

//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Gender: "<<gender<<endl;
//     }
// };

//int main(){
    // Student s1("Hello",22,"M");
    // Student s2;
    // Student s3("Hi",33,"F");

    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;
    // cout<<s3.gender<<endl;
    //s
    //Student s1;


//}



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
    Rectangle r1;//for constructors
    Rectangle r2(5,4); 
    int Area=r2.getArea();
    int Perimeter = r2.getPerimeter();

    cout << "Rectangle Area: " << Area << endl;
    cout << "Rectangle Perimeter: " << Perimeter << endl;
}