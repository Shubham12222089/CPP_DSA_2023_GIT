// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World!"<<endl;
// }


#include<iostream>
using namespace std;

int duplicate(int n, int arr[], int temp[]) {
    int j = 0;
    temp[j] = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            j++;
            temp[j] = arr[i];
        }
    }
    
    return j;
}

int main() {
    int n;
    cin >> n;
    int arr[100], temp[100];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int m = duplicate(n, arr, temp);
    
    for (int j = 0; j <= m; j++) {
        cout << temp[j] << " ";
    }
    
    return 0;
}
