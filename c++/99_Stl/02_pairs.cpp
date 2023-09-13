#include<bits/stdc++.h>
using namespace std; 
int main(){
    pair<int,string> p;
    //p=make_pair(2,"abc"); 1st method;
    p={2,"abc"}; //second method

    //for copy
    // pair<int,string> &p1=p;//agr reference use na kare to iska matlab copy nhi bni hai same hi chij aayi hai.
    // p1.first=3; 

    cout<<p.first<<" "<<p.second<<endl;

    //array operation

    // pair<int,int> p_array[3];
    // p_array[0] = {1,2};
    // p_array[1] = {3,4};
    // p_array[2] = {5,6};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }


    //taking input

    pair<int,string> s;
    cin>>s.first;
    cout<<s.first;
    
    

}