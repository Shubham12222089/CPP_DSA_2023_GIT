//polymorphism
//poly --> many
//morphs --> forms

//->same entity(function or operator) behaves differently in different fumction

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int b=10;
//     int c=a+b;

//     string x="H";
//     string y="I";
//     string z=x+y;

//     //means + operator behaves differently.
// }



//-----------------------------------
// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// int sum(double a,double b){
//     return a+b;
// }
// int sum(int a,int b,int c){
//     return a+b+c;
// }
// int main(){
//     int a,b,c;
//     cout<<sum(2,2);
// }


#include<iostream>
using namespace std;

class game1{
    public:
    void s(string g){
        cout<<"game is : "<<g<<endl;
    }
};

class game2 {
    public:
    void s(string g){
        cout<<"game is "<<g<<endl;
    }
};
class c : public game1,public game2{
    
    
};

int main(){
    c obj;
    obj.game1::s("cricket");
    obj.game2::s("Football");
}