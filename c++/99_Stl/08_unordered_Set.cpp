//we should use unordered set when there 
//is said that given string is present or not.
//and when order does not matter.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     unordered_set<string> s;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string str;
//         cin>>str;
//         s.insert(str);
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         string str;
//         cin>>str;
//         if(s.find(str)==s.end()){
//             cout<<"No";
//         }
//         else{
//             cout<<"Yes";
//         }
//     }
// }



//-=--------Multi-set--------------------
//multiset allows duplicate values.
#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(string value: s){
        cout<<value<<endl;
    }
    for(auto it=s.begin();it!=s.end();++it){
        cout<< (*it) <<endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("zdef");
    s.insert("ghi");
    s.insert("abc");

    //ye function sirf us iterator ka value ko dlt karega.
    // auto it = s.find("abc");
    // if(it != s.end()){
    //     s.erase(it);
    // }
    s.erase("abc");//ye saari duplicate values ko dlt kar dega.
    print(s);
}
