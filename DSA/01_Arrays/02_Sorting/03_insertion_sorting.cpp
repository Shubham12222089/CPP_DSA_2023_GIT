//pseudo code for selection sorting
// selectionSort(array, size)
//   repeat (size - 1) times
//   set the first unsorted element as the minimum
//   for each of the unsorted elements
//     if element < currentMinimum
//       set element as new minimum
//   swap minimum with first unsorted position
// end selectionSort

#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (int j = i-1; j >= 0; j--)
        {
            if(arr[i]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        
    }
    
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};

    insertionSort(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}