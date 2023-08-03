// #include<iostream>
// using namespace std;

// int main(){
    // int i=1;
    // while(i<9){
    //     cout<<i<<endl;
    //     i++;
    // }

    // for(int i=1;i<=9;i++){
    //     cout<<i<<endl;
    // }
    
//}

//table
// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cout<<"Enter the value: ";
//     cin>>t;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout<<t<<" X "<<i<<" = "<<t*i<<endl;
//     }
// }


//decreament table;

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 100; i >= 0; i-=2)
//     {
//         cout<<i<<" ";
//     }
    
// }



//nested for loop

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<< i <<" "<< j << endl;
//         }
        
//     }
    
// }

//pattern printing--------------------------
//pat 1
// #include<iostream>
// using namespace std;

// int main(){
//     int r,c;
//     cout<<"Enter the number of rows: ";
//     cin>>r;
//     cout<<"Enter the number of columns: ";
//     cin>>c;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= c; j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
    
// }

//pat 2
#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r;
    cin>>c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c ; j++)
        {
            if(i == 1 || i == r || j == 1 || j == c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
    
}