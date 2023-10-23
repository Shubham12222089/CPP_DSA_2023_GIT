#include<iostream>
using namespace std;

/*
    Tower of Hanoi

    There are three towers :- source, auxiliary, dedstination
    source tower contains a set of disks stacked, with the largest at the bottom and
    the smallest top.
    -the objective is to transfer the entire disks from source to destination tower
    maintain the same order of the disks, using auxiliary tower.

    Rules
    -only one disk can be transferred at a time.
    - never a larger disk is placed on the smaller disk during the transfer. 
*/

// void towerofHanoi(int n,char src,char aux,char dest){
//     if(n==1){
//         cout<< "Moved disk "<<n<<" from "<< src << " to "<<dest<<endl;
//         return;
//     }

//     towerofHanoi(n-1,src,dest,aux);

//     cout<< "Moved disk "<<n<<" from "<< src << " to "<<dest<<endl;

//     towerofHanoi(n-1,aux,src,dest);
// }

// int main(){

//     int n;
//     cout<<"Enter the number of disks: ";
//     cin>>n;

//     towerofHanoi(n,'A','B','C');
// }

int toh(int n,int source,int dest,int aux){
    if(n==1){
        cout<<"move disk 1 from rod "<<source<<" to rod "<<dest<<endl;
        return 1;
    }
    int moves=1;
    moves+=toh(n-1,source,aux,dest);
    cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
    moves+=toh(n-1,aux,dest,source);
    return moves;
}

int main(){
    int n;
    cout<<"enter the number of disks: ";
    cin>>n;

    toh(n,1,3,2);
}