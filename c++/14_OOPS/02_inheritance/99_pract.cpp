/*

    Suppose you are designing a program to manage information about employees in a company. Create a C++ program with the following classes:

    Person class with the following attributes and methods:

    Attributes:
    string name (the person's name)
    int age (the person's age)
    Methods:
    A constructor to initialize name and age.
    A method displayInfo() that displays the person's name and age.
    Employee class, which inherits from Person, with the following additional attributes and methods:

    Attributes:
    int employeeId (the employee's unique identifier)
    double salary (the employee's salary)
    Methods:
    A constructor to initialize name, age, employeeId, and salary.
    A method displayInfo() that overrides the displayInfo() method in the Person class. It should display the person's name, age, employee ID, and salary.
    Write a C++ program that demonstrates the use of these classes. Create at least one Person object and one Employee object and display their information using the displayInfo() method.

    Example:

    Person person1("Alice", 30);
    Employee employee1("Bob", 25, 1001, 50000.0);

    person1.displayInfo();
    employee1.displayInfo();
    Output:

    Name: Alice
    Age: 30
    Name: Bob
    Age: 25
    Employee ID: 1001
    Salary: $50000.00


    Constraints:

    Ensure that the Employee class inherits from the Person class and correctly overrides the displayInfo() method.
    Use appropriate data types and formatting for displaying employee information.
*/

// #include <iostream>
// #include <string>
// #include <iomanip>

// using namespace std;
// class Person {
// private:
//     string name;
//     int age;
// public:
//     Person(string n, int a){
//         name = n;
//         age = a;

//     }

//     void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// class Employee : public Person {
// private:
//     int empid;
//     double salary;
// public:
//     Employee(string n, int a, int id, double s){
//         Person(n,a);
//         empid=id;
//         salary=s;
//     }

//     void displayInfo() {
        
//         Person::displayInfo();
//         cout << "Employee ID: " << empid << endl;
//         cout << fixed << setprecision(2) << "Salary: $" << salary << endl;
//     }


// };

// int main() {
//     Person person1("Abhay", 20);
//     Employee emp1("Priyanshu", 25, 1001, 50000.0);

//     cout << "Person Info:" << endl;
//     person1.displayInfo();
    
//     cout << "\nEmployee Info:" << endl;
//     emp1.displayInfo();

//     return 0;
// }

