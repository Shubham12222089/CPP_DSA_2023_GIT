#include<iostream>
using namespace std;

enum season{
    summer,
    winter,
    autumn,
    spring //we can write these in single line also.
};

int main(){
    season s1;
    s1 = spring;
    cout << s1 << endl;
}