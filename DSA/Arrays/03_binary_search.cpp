//binary search is monotonic function.
// #include<iostream>
// using namespace std;

// int binary_search(int n,int arr[],int key){
//     int start = 0;
//     int end = n-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         //mid
//         if(arr[mid]==key){
//         return mid;
//         }
//         else if(arr[mid]>key){
//             //right
//             start = mid+1;
//         }
//         else{
//             //left
//             end = mid - 1; 
//         }
//         mid = (start + end)/2; //updated mid.
//     }
//     return -1;

// }

// int main(){
//     int key,n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int arr[100];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the key: ";
//     cin>>key;
//     int temp = binary_search(n,arr,key);
//     cout<<"index of "<<key<<" is: "<<temp<<endl;

// }



//
#include<iostream>
using namespace std;

int firstOccb(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int lastOccr(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,3,5};

    cout<<"First Occurance of 3 is: "<< firstOccb(arr,5,3)<<endl;
    cout<<"Last Occurance of 3 is: "<<lastOccr(arr,5,3);


}

