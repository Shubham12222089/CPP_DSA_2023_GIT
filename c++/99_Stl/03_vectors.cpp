// #include<bits/stdc++.h>
// using namespace std;
// void printvector(vector<int> &v){
//     //&v isiliye use kiye taaki copy na bane uske badle wo actual vector pass hoga.
//     //mtlb ek me change to dusre me bhi change.
//     cout<<"Size: "<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     // vector<int> v;
//     // int n;
//     // cin>>n;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     int x;
//     //     cin>>x;
//     //     v.push_back(x);
//     // }

//     // vector<int> v(5);//direct declare of size;
//     // v.push_back(3);

//     vector<int> v(5,3);//vector of size 5 and value as 3 3 3 3 3
//     printvector(v);

//     vector<int> &v1 = v;//direct copy of vector
//     printvector(v1);
//     //hum array me copy karte the but yaha vector ke through itna easily.

    

// }

//we have used array now we can use array;
// int main(){
//     vector<int> v;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     printvector(v);
    
// }

//----------nesting vector and pair------------------
// #include<bits/stdc++.h>
// using namespace std;

// void printvec(vector<pair<int,int>> &v){
//     cout<<"Size: "<<v.size()<<endl;
//     for (int i = 0; i <v.size(); i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
//     }
    
// }

// int main(){
//     vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
//     printvec(v);
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         //v.push_back({x,y});//as pair takes inpt in {x,y} and make_pair(x,y)
//         v.push_back(make_pair(x,y));
//     }
//     printvec(v);
// }

//------------difference b/w vector of vector and array vector -----------------------
// #include<bits/stdc++.h>
// using namespace std;

// void printvec(vector<int> &v){
//     cout<<"Size: "<<v.size()<<endl;
//     for (int i = 0; i <v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v[n]; //vector of array
//     for (int i = 0; i < n; i++)
//     {
//         int N;
//         cin>>N;
//         for (int j = 0; j < N; j++)
//         {
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printvec(v[i]);
//     }
    
// }


//--------------vector of vector--------------------------
#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v; //vector of array
    for (int i = 0; i < n; i++)
    {
        int N;
        cin>>N;
        vector<int> temp;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        printvec(v[i]);
    }
    
}
