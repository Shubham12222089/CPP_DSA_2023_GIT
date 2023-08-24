#include<iostream>
using namespace std;

// int linear_search(int n,int arr[],int search){
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==search){
//             temp = 1;
//             break;
//         }
//     }
//     if(temp == 1){
//         cout<<"Given element exist in the array.";
//     }
//     else{
//         cout<<"doesn't exist";
//     }
    
// }

// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int search;
//     cout<<"Enter the value for search: ";
//     cin>>search;

//     linear_search(n, arr, search);
    
// }

//---second method

// bool linearsearch(int arr[], int size, int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
        
//     }
//     return false;
    
// }

// int main(){
//     int arr[10] = {93, 21, 10, 17, 88, 11, 1, 8, 99};

//     int key;
//     cin>>key;

//     bool found = linearsearch(arr,10,key);

//     if(found){
//         cout<<"key found";
//     }
//     else{
//         cout<<"not found";
//     }
// }

// You are given an array of integers, arr, containing n elements. 
//Write a C++ function int linearSearch(int arr[], int n, int target) to perform a linear search and find the index of the first occurrence of the target element within the array. If the target element is not found, 
//the function should return -1.

//linear search

void linearsearch(int n,int arr[],int target){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            cout<<target<<" is present at index "<<i<<endl;
            return; // Exit the function after finding the target
        }
    }
    // If the loop completes without finding the target
    cout<<"-1";
    
}
int main(){
    int n,target;
    cout<<"enter the size: ";
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the value you want to search: ";
    cin>>target;
    linearsearch(n,arr,target);
    
}
