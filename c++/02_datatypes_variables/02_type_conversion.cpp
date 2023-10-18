#include<iostream>
using namespace std;

class Number{
    int n;
    public:
    Number(int n){
        this->n=n;
    }
    void print(){
        cout<<n;
    }
    operator int(){
        return n;
    }
};

int main(){
    // float f = 2.314;
    // int y;
    // y=f;
    // cout<<y;
//-----------------------------------------------------------

    //1. basic to class type conversion.
    //when we create object using primary data type then it is called
    //as basic to class type conversion. Generally we use single argument constructor to perform to
    // type conversion from basic to class type.
    
    Number num = 19;
    num.print();
    int a = num;
    cout<<a;


//-----------------------------------------------------------
    //2. Class type to basic type

    /*
        when we assign an object to primitive datatype variable then it is known as class type to
        basic type conversion. To perform this type of conversion we have to define the casting operator function.

        this casting operator function must be a member of the class.
        this function cannot have any return datatype.
        this function cannot take any parameter.
        operator datatype(){

        }
    */

//------------------------------------------------------------

    
}