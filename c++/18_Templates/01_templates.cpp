#include<iostream>
using namespace std;

//templates allows us to write generic programs.
//Can be implemented in two ways - i) function template ii)Class Template

/*
1.1     Class Template
    Declaration

    template <class T>
    class className{
        T var;

        T print(){

        }
    };

1.2     Defining class member outside class template
    
    template <class T>
    class className{
        T var;

        returnType print();
        
    };
    template <class T>
    T className<T> print(){

    }
*/
// template <class T>
// class Number{
//     T num;
//     public:
//     Number(T n){
//         num=n;
//     }
//     T getNum(){
//         return num;
//     }
// };

template <class T>
class Number{
    T num;
    public:
    Number(T n){
        num=n;
    }

    T getNum();
    
};
template <class T>
T Number<T> :: getNum(){
        return num;
    }
int main(){
    
    Number<int> n1(2);
    Number<float> n2(2.2);
    Number<double> n3(7.77);

    cout<<"Int : "<<n1.getNum()<<endl;
    cout<<"float : "<<n2.getNum()<<endl;
    cout<<"Double : "<<n3.getNum()<<endl;

}