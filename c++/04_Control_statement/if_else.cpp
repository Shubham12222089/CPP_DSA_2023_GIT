// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value: ";
//     cin>>a;
//     if(a>0){
//         cout<<"a is postive.";
//     }
//     else if(a==0){
//         cout<<"a is zero.";
//     }
//     else{
//         cout<<"a is negative.";
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value: ";
//     cin>>a;
//     if(a%2==0){
//         cout<<"a is even.";
//     }
//     else{
//         cout<<"a is odd.";
//     }
    
// }

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the marks: ";
    cin>>m;
    if(m>100 || m<0){
        cout<<"Invalid.";
    }
    else if(m>90 && m<=100){
        cout<<"Grade A";
    }
    else if(m>80 && m<=90){
        cout<<"Grade B";
    }
    else if(m<=80 && m>70){
        cout<<"Grade C";
    }
    else if(m<=70 && m>60){
        cout<<"Grade D";
    }
    else if(m<=60 && m>50){
        cout<<"Grade E";
    }
    else{
        cout<<"Fail";
    }
}