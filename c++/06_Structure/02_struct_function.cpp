#include<iostream>
using namespace std;

// struct Employee{
//     int age;
//     float salary;
//     int employeeID;

// };

// void displayInfo(Employee emp){
//     cout << "Age is : "<<emp.age<<endl;
//     cout << "Salary is : "<<emp.salary<<endl;
//     cout << "Employee ID is : "<< emp.employeeID<<endl;
// }

// int main(){

//     Employee e1;

//     cin>> e1.age;
//     cin>> e1.salary;
//     cin>> e1.employeeID;

//     displayInfo(e1);
// }

struct info{
    string name;
    int age;
    int class1;
};

void inf(info emp){
    cout<<"Name is : "<<emp.name<<endl;
    cout<<"Age is: " <<emp.age<<endl;
    cout<<"Class is: "<< emp.class1<<endl;
}
int main(){
    info e;

    cin>>e.name;
    cin>>e.age;
    cin>>e.class1;

    inf(e);
}