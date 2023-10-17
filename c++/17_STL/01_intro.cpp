#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// STL ;- Standard Template library
//Types of stl containers
/*
    1. sequential container.->it allows us to store elements that can be accessed in 
    sequential order eg. vector, array, list
    2. Associative -> it allows us to store elements in sorted order, the
    order does not depend upon when the element is inserted. eg map,set, multiset.

    3. Unordered Associative--> it provides the unordered , unsorted versions of associative functions 
    eg. unordered set,unordered map,unordered multimap,unordered multiset
*/

int main(){

    // vector<int> num = {1,2,3,4,5};

    // for(auto i : num){
    //     cout<<i<<endl;
    // }

    // set<int> num={1,9,10,7};
    // for(auto i : num){
    //     cout<<i<<" ";
    // }

    unordered_set<int> num={1,90,10,7,8,0,3};
    for(auto i : num){
        cout<<i<<" ";
    }


}