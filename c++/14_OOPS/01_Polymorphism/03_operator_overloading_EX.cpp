// #include<iostream>
// using namespace std;

// class Fraction{
//     int a;
//     int b;
//     public:
//     Fraction(){
//         a=0;
//         b=0;
//     }

//     void input(){
//         cout<<"Enter the Numerator: ";
//         cin>>a;
//         cout<<"Enter the Denominator: ";
//         cin>>b;
//     }

//     Fraction operator *(Fraction &obj){
//         Fraction temp;
//         temp.a = a * obj.a;
//         temp.b= b * obj.b;

//         return temp; 
//     }
//     void output(){
//         cout<< "The fraction is: "<< a << "/" << b;
//     }
// };

// int main(){
//     Fraction f1, f2, result;

//     cout<<"Enter the first fraction: "<<endl;
//     f1.input();

//     cout<<"Enter the first fraction: "<<endl;
//     f2.input();

//     result = f1*f2;
//     result.output();

// }

//example 2
#include<iostream>
using namespace std;

class marks {
    int ext;
    int inter;

public:
    marks() {
        ext = 0;
        inter = 0;
    }

    marks(int ext, int inter) {
        this->ext = ext;
        this->inter = inter;
    }

    void input() {
        cout << "Enter the External Marks: ";
        cin >> ext;
        cout << "Enter the Internal Marks: ";
        cin >> inter;
    }

    marks operator -(marks &obj) {
        marks temp;
        temp.ext = ext - obj.ext;
        temp.inter = inter - obj.inter;
        return temp;
    }

    void display() {
        cout << "Subtraction of external marks: " << this->ext << endl;
        cout << "Subtraction of internal marks: " << this->inter << endl;
    }
};

int main() {
    marks f1, f2, result;

    f1.input();

    f2.input();

    result = f1 - f2;
    result.display();

    return 0;
}

//----------------------------------
// #include <iostream>
// using namespace std;
// class count{
//     int n;
//     public:
//     count(){
//         n=10;
//     }
//     void operator !(){
//         n=n*3;
//     }
//     void display()
//     {
//         cout<<"value: "<<n<<endl;
//     }
// };
// int main()
// {
//     count obj;
//     !obj;
//     obj.display();
// }
