#include<iostream>
using namespace std;

int main(){
    //Array stores multiple values of same type of
    //element that have contiguous memory location in a single variable.
    
    //int var = 5;

    //int arr[5]; //Array declaration

    //char arrChar[3] = {'a','b','c'};
    int arr[5] = {1,2,3,4,5};
    int Size = sizeof(arr)/sizeof(int);
    cout << Size;
    // cout << "before changing : " <<arr[0]<< endl; //array's element accessing
    // arr[3] = 9;
    // cout<< "after changing : "<<arr[3]<<endl;

    // string arr[5] = {"Earth","Mars","Jupiter","Venus","Mercury"};

    // cout << sizeof(arr)/sizeof(int);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (string i : arr){ //if you are not specified ehich to return then use "auto"
    //     // return type string, int, auto etc.
    //     cout << i<<" ";
    // }
    
    

    



}