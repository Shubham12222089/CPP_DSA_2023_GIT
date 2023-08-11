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

bool linearsearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        
    }
    return false;
    
}

int main(){
    int arr[10] = {93, 21, 10, 17, 88, 11, 1, 8, 99};

    int key;
    cin>>key;

    bool found = linearsearch(arr,10,key);

    if(found){
        cout<<"key found";
    }
    else{
        cout<<"not found";
    }
}