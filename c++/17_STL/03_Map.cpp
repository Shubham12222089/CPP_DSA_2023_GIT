#include<iostream>
#include<map>
using namespace std;

// maps are associative containers that store paired data.
// These paired data are called key-value pairs,
//where key is unique but values is not.

int main(){
    //first method
    // map<int,string> student {
    //     {1,"Shubham"},
    //     {2,"Milan"},
    //     {3,"Anil"},
    //     {4,"Anil"}
    // };


    //second method
    map<int,string> student;
    student[1] = "Shubham";
    student[2] = "Milan";

    //third method
    student.insert(make_pair(3,"Shubham"));
    student.insert(make_pair(4,"Anil"));

    // for(int i=1;i<=student.size();i++){
    //     cout<<"Student["<<i<<"] : "<<student[i]<<endl;
    // }

    //Iterator
    map<int,string> :: iterator it;
    for(it=student.begin();it!=student.end();it++){
        // cout<<it->first<<"-"<<it->second<<endl;
        cout<<(*it).first<<"-"<<(*it).second<<endl;
    }


}