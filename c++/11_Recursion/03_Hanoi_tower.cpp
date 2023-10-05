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

void towerofHanoi(int n,char src,char aux,char dest){
    if(n==1){
        cout<< "Moved disk "<<n<<" from "<< src << " to "<<dest<<endl;
        return;
    }

    towerofHanoi(n-1,src,dest,aux);

    cout<< "Moved disk "<<n<<" from "<< src << " to "<<dest<<endl;

    towerofHanoi(n-1,aux,src,dest);
}

int main(){

    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;

    towerofHanoi(n,'A','B','c');
}