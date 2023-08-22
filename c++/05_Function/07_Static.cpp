#include<iostream>
using namespace std;

class students{
    int id;
    static int count; //don't need to initialize

    public:
    void setData(){
        cout<< "Enter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of student is: "<<id<<" and the student count is "<<count<<endl;
    }
};
int students::count;
int main(){
    students s1, s2, s3;

    s1.setData();
    s1.getData();

    s2.setData();
    s2.getData();

    s3.setData();
    s3.getData();
}