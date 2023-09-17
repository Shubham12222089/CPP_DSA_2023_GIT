// #include<bits/stdc++.h>
// using namespace std;

// void print(unordered_map<int,string> &m){
//     cout<<"size: "<<m.size()<<endl;
//     for(auto &p : m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
// }

// int main(){
//     unordered_map<int, string> m;
//     m[1]="abc";
//     m[5]="cdc";
//     m[3]="acd";
//     m[6]="cde";

//     print(m);
// }

//--------------------------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}