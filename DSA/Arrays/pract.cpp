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

void even(int arr[], int n){
    bool temp = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            temp = true;
            break;
        }
        
    }
    if(temp){
        cout<<"Even number present in the array.";
    }
    else{
        cout<<"Even number is not present in the array.";
    }
    
    
}
int main(){
    int n,temp=0;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    even(arr, n);

    
}