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

int main(){
    int r,c,k;
    cin>>r;
    cin>>c;
    k=1;
    for (int i = 1; i <= r; i++)
    {
        
        for (int j = 1; j <= c; j++,k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
    
}