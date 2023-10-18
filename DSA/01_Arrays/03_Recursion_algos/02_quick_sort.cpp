// #include <iostream>
// using namespace std;

// int partition(int arr[], int s, int e){
//     //find pivot position
//     int pivot = arr[s];

//     int count = 0;
//     for(int i = s+1; i <= e; i++){
//         if(arr[i] <= pivot){
//             count++;
//         }
//     }
//     int pivotIndex = s + count;

//     swap(arr[pivotIndex], arr[s]);

//     int i = s;
//     int j = e;

//     while(i < pivotIndex && j > pivotIndex){
//         while(arr[i] < pivot) i++;

//         while(arr[j] > pivot) j--;

//         swap(arr[i++], arr[j--]);
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e){
//     if(s>=e) return;

//     int p = partition(arr, s, e);

//     quickSort(arr,s,p-1);
//     quickSort(arr,p+1,e);
// }

// int main(){
//     int arr[5] = {2,4,1,9,6};
//     int n = 5;

//     quickSort(arr, 0, n-1);

//     for(int i = 0; i < n; i++){

//         cout << arr[i] << " ";
//     }

// }

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[low], arr[i - 1]);

    return i - 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = {2, 4, 1, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
