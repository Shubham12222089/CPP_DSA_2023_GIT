// #include<iostream>
// using namespace std;

// int fact(int a,int factorial){
//     for (int i = 1; i <= a; i++)
//     {
//         factorial*=i;
//     }
//     cout<<factorial;
    
// }

// int main(){
//     //recursion:= function calling itself.
//     int a;
//     cin>>a;
//     int factorial=1;
//     if(a==0 || a==1){
//         cout<<"1";
//     }
//     else{
//         fact(a,factorial);
//     }
// }

#include<iostream>
using namespace std;

int factorial(int n){
    cout<<n<<endl;
    //base case
    if(n==0||n==1){
        return 1;
    }
    int smallprob=factorial(n-1);
    //int bigprob=n*smallprob;
    return n*smallprob;
}
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    int smallprob=power(n-1);
    int bigprob=2*smallprob;

    return bigprob;

}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;;
    int ans2 = power(n);
    cout<<ans2;
}