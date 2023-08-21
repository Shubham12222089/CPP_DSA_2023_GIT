#include<iostream>
using namespace std;

//Reference variables
// is a reference to an eisting variable.
void test(int &n){
    n++;
    cout<<"value of n from test method is: "<<n<<endl;
}
int& test2(int n){
    int num = n;
    int &ans = num;
    return ans;
}

int main(){

    int n;
    cin>>n;
    
    test2(n);

    // test(n);

    // cout<<"value of n from main method is : " <<n<<endl;
    // string name = "Hello";
    // string &ref = name;//reference variable --> two variable pointing to same address.
    // cout<<name;
    // cout<<ref;

    // int a = 5;
    // int &b = a;
    // cout<<a<<endl;
    // a++;
    // cout<<a<<endl;
    // b++;
    // cout<< a <<endl;
    
}