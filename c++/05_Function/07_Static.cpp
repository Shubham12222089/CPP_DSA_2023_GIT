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
    static void getcount(){
        cout<<"The value of count is: "<<count<<endl;
    }
};
int students::count; //here we can initialize count by any values.
int main(){
    students s1, s2, s3;

    s1.setData();
    s1.getData();

    students::getcount();//if we want to access the static function it can 
    //only be accessed through class.

    s2.setData();
    s2.getData();

    s3.setData();
    s3.getData();
}

//static variable use karne ke baad variable jitne bhii function use huii
// hongi sbke liye common agr value increment hongi to wo sbke liye common me increment
// hogi agr static na use kare to wo saare funcn ke liye alg alg hogii