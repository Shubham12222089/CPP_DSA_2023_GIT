// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World!"<<endl;
// }


// #include<iostream>
// using namespace std;

// int duplicate(int n, int arr[], int temp[]) {
//     int j = 0;
//     temp[j] = arr[0];
    
//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[i - 1]) {
//             j++;
//             temp[j] = arr[i];
//         }
//     }
    
//     return j;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[100], temp[100];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int m = duplicate(n, arr, temp);
    
//     for (int j = 0; j <= m; j++) {
//         cout << temp[j] << " ";
//     }
    
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
class person{
    string firstname;
    string lastname;
    int id_no;
    public:
    void set_p()
    {   
        cout<<"enter first name=";
        getline(cin,firstname);
        cout<<"enter last name=";
        getline(cin,lastname);
        cout<<"enter the id=";
        cin>>id_no;
    }
    void display_p()
    {
        cout<<"name: "<<firstname+lastname<<endl;
        cout<<"student id="<<id_no<<endl;

    }
};
class student: private person
{   
    int sum;
    public:
    void calculategrade()
    {   
        set_p();
        int a[100];
        int avg=0;
        int n;
        avg=0;
        cout<<"enter the size=";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            avg+=a[i];
        }
        sum=avg/n;
    }
    void display_s()
    {   
        display_p();
        if(sum>=90 && sum<=100)
        cout<<"O"<<endl;
        else if(sum>=80 && sum<90)
        cout<<"E"<<endl;
        else if(sum>=70 && sum<80)
        cout<<"A"<<endl;
        else if(sum>=55 && sum<70)
        cout<<"P"<<endl;
        else if(sum>=45 && sum<55)
        cout<<"D"<<endl;
        else
        cout<<"T"<<endl;
    }

};
int main()
{
    student s;
    s.calculategrade();
    s.display_s();
    return 0;
}