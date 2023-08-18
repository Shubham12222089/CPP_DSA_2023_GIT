#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){

    for (int i = 0; i < n-1; i++)
    {
        bool swapped  = false;
        for (int j = 0; j < n-i; j++)
        {
            //size - i --> used because last index of 
            //the array is already sorted.
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped = false){
            break;
        }
        
    }
    
}

int main(){
    int arr[6]={5,6,3,9,2,8};

    bubblesort(arr,6);

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
