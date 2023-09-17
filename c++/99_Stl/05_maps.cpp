// //map store unique keys and store data in sorted order.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int, string> m;
//     m[1] = "abc";  //O(logn)
//     m[5] = "cdc";
//     m[2] = "acd";

//     //second method to insert data in map
//     m.insert({3,"xyz"});
//     //m["abcd"]="abcd"; // m.size * O(logn);
//     //printing maps

//     cout<<"size of map is "<<m.size()<<endl;

//     map<int, string> :: iterator it;
//     for(it=m.begin();it!=m.end();++it){
//         cout<< (*it).first << " " << (*it).second<<endl;
//     }

//     for(auto &i : m){
//         cout<< i.first<<" "<<i.second<<endl;
//     }

//     // find

//     auto t = m.find(3);
//     if(t==m.end()){
//         cout<<"NO value"<<endl;
//     }else{
//         cout<<(*t).first<<" "<<(*t).second<<endl;
//     }

//     //erase 
//     m.erase(3); //O(logn)
//     for(auto &i : m){
//         cout<< i.first<<" "<<i.second<<endl;
//     }

//     //clear
//     m.clear();


    
// }

//question on maps
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<string,int> m;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         string s;
//         cin>>s;
//         m[s]++;//counting because maps stores unique values.
//     }
//     for(auto &i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
// }

#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j]==arr[i]){
                arr[j]=arr[j+1];
                int k;
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }
    }
    for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
}