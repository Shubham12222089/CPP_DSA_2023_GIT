// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string> &s){
//     for(string value: s){
//         cout<<value<<endl;
//     }
//     for(auto it=s.begin();it!=s.end();++it){
//         cout<< (*it) <<endl;
//     }
// }
// int main(){
//     set<string> s;
//     s.insert("abc");
//     s.insert("zdef");
//     s.insert("ghi");
//     s.insert("abc");//only unique elements are isertd.
//     auto it = s.find("abc"); //auto it same as :: iterator it;
//     if(it!=s.end()){
//         cout<<(*it)<<endl;
//     }
//     //s.erase("ghi");
//     //print(s);
// }


//----question --> remove duplicates

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto value : s){
        cout<<value<<endl;
    }
}