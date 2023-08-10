#include<iostream>
using namespace std;

int main(){
    // int i = 1;
    // while(i<=10){
    //     cout<<i<<" ";
    //     i++;
    // }

    //table--------------------------

    // int i=1,n;
    // cout<<"Enter the value: ";
    // cin>>n;
    // while(i<=10){
    //     cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    //     i++;
    // }

    //nested loop:-----------------

    // int i=1;
    // while(i<=5){
    //     int j=1;
    //     while(j<=5){
    //         cout<<i<<" "<<j<<endl;
    //         j++;
    //     }
    //     i++;
    // }

    // ---------------------------

    //do while:
    // int i=1;
    // do{
    //     cout<< i << endl;
    // }
    // while(i < 9);

    //break and continue:----------------

    int i = 1;
    for (int i = 0; i <= 10; i++)
    {
        // if(i==3){
        //     break;
        // }
        if(i==4){
            continue;
        }
        cout<< i <<" ";
    }
    

}