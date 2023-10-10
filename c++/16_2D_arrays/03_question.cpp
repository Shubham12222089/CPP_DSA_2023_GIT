#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target,int row,int col){
    for(int row = 0; row<3;row++){
        for(int col = 0;col<4;col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

void sum(int arr[][4]){
    int temp=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            temp+=arr[i][j];
        }
    }
    cout<<"sum is : "<<temp;
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Element to search: ";
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"present";
    }
    else{
        cout<<"Not present";
    }

    sum(arr);
}