#include<iostream>
using namespace std;

// int main(){
//     string name = "Shubham";
//     int rollno = 12222089;
//     float marks = 80.0;
// }
//for many students it will be complicated 
//so

struct students{
    string name;
    int rollno;
    float marks;
};

int main(){
    students student1;
    students student2;
    student1.name = "shubham";
    student1.rollno = 12222089;
    student1.marks = 80.0;
    student2.name = "Asmit";
    student2.rollno = 12222222;
    student2.marks = 79.5;

    cout<<student1.marks<<endl;

}