#include<iostream>
using namespace std;

int main(){
    int arr[10] = {23, 123, 41, 67};

    cout<<"1 : "<<arr<<endl;
    cout<<"2 : "<<arr[0]<<endl;
    cout<<"3 : "<<&arr[0]<<endl;
    cout<<"4 : "<<*arr<<endl;
    cout<<"5 : "<<*arr+1<<endl;//derefrencing and adding in pointer
    cout<<"6 : "<<*(arr+1)<<endl;//shift to second index
    cout<<"7 : "<<*(arr)+1<<endl;
    cout<<"8 : "<<arr[2]<<endl;
    cout<<"9 : "<<*(arr+2)<<endl;
}