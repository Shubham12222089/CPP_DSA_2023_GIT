#include<iostream>
using namespace std;

// int main(){
//     int r,c;
//     cin>>r;
//     cin>>c;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= c; j++)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }
    
// }

// int main(){
//     int r,c;
//     cin>>r;
//     cin>>c;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= c; j++)
//         {
//             cout<<r-c+1;
//         }
//         cout<<"\n";
        
//     }
    
// }

//pattern 3----
// int main(){
//     int r,c,k;
//     cin>>r;
//     cin>>c;
//     k=1;
//     for (int i = 1; i <= r; i++)
//     {
        
//         for (int j = 1; j <= c; j++,k++)
//         {
//             cout<<k;
//         }
//         cout<<"\n";
//     }
    
// }


//pattern --- 4------------
// int main(){
//     int c,r;
//     cin>>c;
//     cin>>r;
//     for(int i = 1;i<=r;i++){
//         for(int j = 1;j<=c;j++){
//             if(i%2!=0){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<"\n";
//     }
// }

//pattern 5 ----------------------

// int main(){
//     int c,r;
//     cin>>c;
//     cin>>r;
//     for(int i = 1;i<=r;i++){
//         for(int j = 1;j<=c;j++){
//             if(j%2!=0){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<"\n";
//     }
// }

//pattern 6-----------------
//1
//1
//1
//100
int main(){
    int c,r;
    cin>>c;
    cin>>r;
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            if(i==1 || i==r || j==1 || j==c){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}