#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"result"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] <<endl;
//     }
    
    
// }

//reverse of an array:


// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     cout<<endl;
// }

// void printArray(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<< arr[i] <<" ";
//     }
    
// }

// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     reverse(arr, 6);

//     printArray(arr, 6);
// }

//----to find even is present in my array-------

// void even(int arr[], int n){
//     bool temp = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]%2==0)
//         {
//             temp = true;
//             break;
//         }
        
//     }
//     if(temp){
//         cout<<"Even number present in the array.";
//     }
//     else{
//         cout<<"Even number is not present in the array.";
//     }
    
    
// }
// int main(){
//     int n,temp=0;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     even(arr, n);

    
// }

//reverse an array

// int rev(int n,int arr[]){
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void print(int n,int arr[]){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
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
//     cout<<"without reverse: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     rev(n,arr);
//     cout<<"after reverse: ";
//     print(n,arr);
    
// }

//// You are given an array of integers, arr, containing n elements. 
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
