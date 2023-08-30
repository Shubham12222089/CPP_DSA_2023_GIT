//pseudo code for selection sorting
// selectionSort(array, size)
//   repeat (size - 1) times
//   set the first unsorted element as the minimum
//   for each of the unsorted elements
//     if element < currentMinimum
//       set element as new minimum
//   swap minimum with first unsorted position
// end selectionSort

// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;

// Function to sort an array using
// insertion sort
// void insertionSort(int arr[], int n)
// {
// 	int i, key, j;
// 	for (i = 1; i < n; i++) {
// 		key = arr[i];
// 		j = i - 1;

// 		// Move elements of arr[0..i-1],
// 		// that are greater than key,
// 		// to one position ahead of their
// 		// current position
// 		while (j >= 0 && arr[j] > key) {
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}
// }

// // A utility function to print an array
// // of size n
// void printArray(int arr[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 12, 11, 13, 5, 6 };
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	insertionSort(arr, N);
// 	printArray(arr, N);

// 	return 0;
// }


// #include <iostream>

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
        
//         // Swap the found minimum element with the element at index i
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;

//         // Print the array at this iteration
//         std::cout << "Iteration " << i + 1 << ": ";
//         for (int k = 0; k < n; ++k) {
//             std::cout << arr[k] << " ";
//         }
//         std::cout << std::endl;
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     std::cout << "Original array: ";
//     for (int i = 0; i < n; ++i) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     selectionSort(arr, n);

//     std::cout << "Sorted array: ";
//     for (int i = 0; i < n; ++i) { 
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

