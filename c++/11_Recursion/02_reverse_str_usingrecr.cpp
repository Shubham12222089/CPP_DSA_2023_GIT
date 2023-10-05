#include<iostream>
#include<string>
using namespace std;

void reverse(string &str,int start,int end){
    if(start>=end){
        return;
    }

    swap(str[start],str[end]);

    reverse(str,start+1,end-1);
}

int main(){
    int len;
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    len=str.length();

    reverse(str,0,len-1);

    cout<<"Reversed string is: "<<str<<endl;
}
