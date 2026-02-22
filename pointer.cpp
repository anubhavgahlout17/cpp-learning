#include<iostream>                // Pointers
using namespace std;

int main(){
    int a = 9;
    int *ptr = &a;
    cout<<"The value of a is: "<<a<<endl;    // print Value of a
    cout<<"The value of a is: "<<*ptr<<endl; // print Value of a

    cout<<"The Address of a is: "<<&a<<endl; // print address of a
    cout<<"The Address of a is: "<<ptr<<endl; // print address of a
    


return 0;
}