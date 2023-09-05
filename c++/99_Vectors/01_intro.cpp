#include<iostream>
#include<vector>
using namespace std;

/*
    Vectors are used to store elements of similar to data types,
    unlike array, the size of a vector can grow dynamically.
*/

int main(){
    //int arr[3] = {1,2,3};
    vector<int> vector1 = {1,2,3,4,5}; //initialize a vector.
    //it is not compulsory to define size it can take any arguments.
    cout<<"Original vector: ";
    for(auto i : vector1){ //auto is used if we don't know type it can automatically take.
        cout<< i <<" ";
    } cout<<endl;

    //add element
    vector1.push_back(6);
    vector1.push_back(7);

    //access
    cout<< "Element at 1 is : "<<vector1.at(1)<<endl;

    //change
    vector1.at(1) = 22;
    
    cout<<"Updated vector: ";
    for(auto i : vector1){
        cout<< i <<" ";
    } cout<<endl;
    
}
