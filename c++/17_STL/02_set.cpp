#include<iostream>
#include<set>
using namespace std;

// set - they store UNIQUE elements of same type in a sorted manner.
// Immutable - we can add or remove elements from a set but we can't change the values 
// of existing elements.
int main(){
    set<int,greater<int>> s = {1,7,4,8,9,2,3,4,9,5};

    //s[2] = 55; ->can't change because of immutablilty.
    for(auto i : s){
        cout<<i<<" ";
    }
}