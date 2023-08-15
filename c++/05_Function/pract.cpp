//prime number
// #include<iostream>
// using namespace std;
// void prime(int n){
//     int temp;
//     for(int i = 2;i<n;i++){
//         if(n%i==0){
//             temp=1;
//         }
        
//     }
//     if(temp==1){
//         cout<<n<<" is not prime.";
//     }
//     else{
//         cout<<" prime";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     prime(n);

// }

//===========decimal to binary;

// #include<iostream>
// #include<math.h>
// #include<string.h>
// using namespace std;

// int main(){
//     string n;
//     cin >> n;

//     int temp=0;
//     int len = n.length();
//     for (int i = 0; i < len ; i++)
//     {
//         int bit = n[len - i - 1]-'0';
//         temp += bit*pow(2,i);
//     }
    
//     cout<< "ans is : "<<temp<<endl;
// }

//---------------------------------
//decimal to binary
// #include<iostream>
// #include<math.h>
// #include<string.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int base=1,temp=0;
    
//     while(n!=0){
//         int last_digit = n%10;
//         n/=10;
        
//         temp += last_digit * base;

//         base = base * 2;
//     }
//     cout<<temp;

// }

//--------friend function function ----------------------
#include<iostream>
using namespace std;

class add{
    int a,b;
    public:
    void setnumber(int num1, int num2){
        a=num1;
        b=num2;
    }
    friend int sum(add c);
};
int sum(add c){
    return c.a+c.b;
}

int main(){
    add nums;
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    nums.setnumber(num1, num2);

    int result = sum(nums);
    cout << "Sum is: " << result;
}