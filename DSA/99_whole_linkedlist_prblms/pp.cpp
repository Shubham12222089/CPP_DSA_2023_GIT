// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {5, 3, 8, 10, 1};
//     //make_heap(v.begin(),v.end());
//     //sort_heap(v.begin(),v.end());
//     if(is_heap(v.begin(),v.end())){
//         cout<<"Is heap"<<endl;
//     }
//     else{
//         cout<<"Not heap"<<endl;
//     }
//     v.push_back(70);
//     push_heap(v.begin(),v.end());
//     sort_heap(v.begin(),v.end());
//     for(int i : v){
//         cout<<i<<" ";
//     }
//     priority_queue<int,vector<int>,greater<int>> minheap;
//     for(auto i:v){
//         minheap.push(i);
//     }
//     cout<<"Min heap : ";
//     while(!minheap.empty()){
//         int m = minheap.top();
//         cout<<m<<" ";
//         minheap.pop();
//     }

//     cout<<"Max heap is: ";

//     priority_queue<int,vector<int>> maxheap;
//     for(auto i : v){
//         maxheap.push(i);
//     }

//     while(!maxheap.empty()){
//         int n = maxheap.top();
//         cout<<n << " ";
//         maxheap.pop();
//     }



   
//     return 0;
// }

#include <iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }
    void operator+ (A &obj){
        int v1 = obj.a;
        int v2 = obj.b;
        
        cout<<"Output is : "<<v1-v2;
    }
};
int main() {
    A obj1,obj2;
    obj1.a = 7;
    obj2.b = 4;
    obj1 + obj2;
}