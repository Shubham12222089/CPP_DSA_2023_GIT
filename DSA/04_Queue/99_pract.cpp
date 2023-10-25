#include<iostream>
#include<queue>
using namespace std;
#define n 20

class queue{
    public:
    int *arr;
    int front;
    int back;
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back==n-1){
            cout<<"Queue overflowed";
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"No elements in queue"<<endl;
            return;
        }
        front++;
    }
};



int main(){
    
}