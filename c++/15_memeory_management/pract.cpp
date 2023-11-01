// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int* arr = new int[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<"Sum of the array is : "<<sum<<endl;
//     delete []arr;

//     return 0;
// }

//pract2

#include<iostream>
using namespace std;

struct Student{
    string name;
    int marks;
};

int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    
    Student* arr = new Student[n];

    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].marks;
    } 

    cout<<"Students Data is: ";
    for(int i=0;i<n;i++){
        cout<<"Student name : "<<arr[i].name<<endl;
        cout<<"Student marks : "<<arr[i].marks<<endl;
    }

    delete []arr;

}