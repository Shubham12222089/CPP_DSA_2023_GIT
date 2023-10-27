#include<iostream>
using namespace std;



int main(){
    // int a,b;
    // cout<<"enter values of a and b : ";
    // cin>>a>>b;

    // try{
    //     if(b!=0){
    //         cout<<a/b;
    //     }
    //     else{
    //         throw b;
    //     }
    // }
    // catch(int e){
    //     cout<<"Division by zero  : "<< e <<endl;
    // }
    

    //Example2;
    int arr[5] = {1,2,3,4,5};
    
    try{
        int i = 0;
        while(1){
            if(i!=5){
                cout<< arr[i] <<endl;
                i++;
            }
            else{
                throw i;
            }
        }
    }
    catch(int e){
        cout<<"Array index was out of bound : "<<e<<endl;
    }
}