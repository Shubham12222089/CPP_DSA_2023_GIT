#include<iostream>
#include<set>
using namespace std;

// set - they store UNIQUE elements of same type in a sorted manner.
// Immutable - we can add or remove elements from a set but we can't change the values 
// of existing elements.
int main(){
    // set<int,greater<int>> s = {1,7,4,8,9,2,3,4,9,5};
    // //for decending order we can use greater<int>.
    // //s[2] = 55; ->can't change because of immutablilty.
    // for(auto i : s){
    //     cout<<i<<" ";
    // }

    set<int> s;
    int n;
    //insertion
    for(int i=0;i<5;i++){
        cin>>n;
        s.insert(n);
    }

    //deletion
    s.erase(4);
    //clearing
    s.clear();

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<s.empty();
}