#include<iostream>
using namespace std;
//reverse an array

int rev(int n,int arr[]){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print(int n,int arr[]){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"without reverse: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    rev(n,arr);
    cout<<"after reverse: ";
    print(n,arr);
    
}