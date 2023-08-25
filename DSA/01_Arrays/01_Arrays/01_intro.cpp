#include<iostream>
using namespace std;

// int main(){
//     //Array stores multiple values of same type of
//     //element that have contiguous memory location in a single variable.
    
//     //int var = 5;

//     //int arr[5]; //Array declaration

//     //char arrChar[3] = {'a','b','c'};
//     int arr[5] = {1,2,3,4,5};
//     int Size = sizeof(arr)/sizeof(int);
//     cout << Size;
//     // cout << "before changing : " <<arr[0]<< endl; //array's element accessing
//     // arr[3] = 9;
//     // cout<< "after changing : "<<arr[3]<<endl;

//     // string arr[5] = {"Earth","Mars","Jupiter","Venus","Mercury"};

//     // cout << sizeof(arr)/sizeof(int);

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     // for (string i : arr){ //if you are not specified which to return then use "auto"
//     //     // return type string, int, auto etc.
//     //     cout << i<<" ";
//     // }

    
    

    



// }

//-----------------------------------------------
//taking user input

// #include<iostream>
// using namespace std;

// int input(int n,int arr[]){
//     for (int i = 0; i < n; i++)
//     {
//         cout << "arr["<<i<<"] = "<<arr[i]<<endl;
//     }
//     int temp=0;
//     for (int i = 0; i < n; i++)
//     {
//         temp=temp+arr[i];

//     }
//     cout<<"sum of the array is: "<<temp<<endl;
//     cout<<"average of the array is: "<<temp/n;

    
    
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
//     input(n,arr);
    
// }

//----------------------------------

#include<iostream>
#include<climits>
using namespace std;

int min_max(int n,int arr[]){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    cout<<" minimum is: "<<min<<endl;
    cout<<" maximum is: "<<max<<endl;
    
    
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
    min_max(n,arr);
    
}