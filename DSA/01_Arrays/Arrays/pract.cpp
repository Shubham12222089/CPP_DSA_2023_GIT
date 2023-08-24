// #include<iostream>
// using namespace std;

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

//first and last occurance
#include<iostream>
using namespace std;

int firstOccr(int n,int arr[],int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans =  mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int lastOccr(int n,int arr[],int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans =  mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"First occurance of "<<key <<" is at "<<firstOccr(n,arr,key)<<endl;
    cout<<"Last occurance of "<<key <<" is at "<<lastOccr(n,arr,key)<<endl;
    
}